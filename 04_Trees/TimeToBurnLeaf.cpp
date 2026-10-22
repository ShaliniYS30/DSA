//Problem:Amount of time to burn all leafs
//Platform:Leetcode
//Difficulty:Medium
//Language:c++
#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parent;

    void findParent(TreeNode* root, TreeNode* par) {
        if (root == nullptr) return;

        parent[root] = par;

        findParent(root->left, root);
        findParent(root->right, root);
    }

    TreeNode* findStart(TreeNode* root, int start) {
        if (root == nullptr) return nullptr;

        if (root->val == start) return root;

        TreeNode* left = findStart(root->left, start);

        if (left != nullptr) return left;

        return findStart(root->right, start);
    }

    int amountOfTime(TreeNode* root, int start) {
        findParent(root, nullptr);

        TreeNode* startNode = findStart(root, start);

        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(startNode);
        visited.insert(startNode);

        int time = -1;

        while (!q.empty()) {
            int size = q.size();
            time++;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited.count(node->left)) {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                if (node->right && !visited.count(node->right)) {
                    visited.insert(node->right);
                    q.push(node->right);
                }

                TreeNode* par = parent[node];

                if (par && !visited.count(par)) {
                    visited.insert(par);
                    q.push(par);
                }
            }
        }

        return time;
    }
};

int main() {
    /*
             1
            / 
           5   3
              / 
             10  6
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(6);

    Solution sol;

    int start = 3;

    cout << "Time taken to burn the entire tree: "
         << sol.amountOfTime(root, start) << " minutes" << endl;

    return 0;
}