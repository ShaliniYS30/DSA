// Problem: Binary Tree Right Side View
// Platform: LeetCode
// Problem Number: 199
// Difficulty: Medium
// Language: C++

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;

    if (root == nullptr) {
        return ans;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {

        int size = q.size();

        for (int i = 0; i < size; i++) {

            TreeNode* node = q.front();
            q.pop();

            // Last node of this level
            if (i == size - 1) {
                ans.push_back(node->val);
            }

            if (node->left != nullptr) {
                q.push(node->left);
            }

            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
    }

    return ans;
}

int main() {

    /*
            1
           / \
          2   3
           \   \
            5   4
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> ans = rightSideView(root);

    cout << "Right Side View: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}