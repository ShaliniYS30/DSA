//Problem:InOrder 
//Platform:Leetcode
//Difficulty:Easy
//Language:c++
#include <iostream>
#include <vector>
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

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;

        preorder(root, ans);

        return ans;
    }

    void preorder(TreeNode* root, vector<int>& ans) {

        if(root == nullptr) {
            return;
        }

        ans.push_back(root->val);

        preorder(root->left, ans);

        preorder(root->right, ans);
    }
};

int main() {

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    vector<int> ans = obj.preorderTraversal(root);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}