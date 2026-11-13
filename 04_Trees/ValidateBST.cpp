//Problem:Validate BST
//Platform:Leetcode
//Difficulty:Medium
//Language:C++

#include <iostream>
#include <climits>
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
    bool validate(TreeNode* root, long long minval, long long maxval) {

        if (root == nullptr) {
            return true;
        }

        if (root->val <= minval || root->val >= maxval) {
            return false;
        }

        return validate(root->left, minval, root->val) &&
               validate(root->right, root->val, maxval);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};

int main() {

    // Creating the BST
    TreeNode* root = new TreeNode(8);

    root->left = new TreeNode(5);
    root->right = new TreeNode(10);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(7);

    root->right->right = new TreeNode(6);

    Solution obj;

    if (obj.isValidBST(root)) {
        cout << "Valid BST";
    }
    else {
        cout << "Not a Valid BST";
    }

    return 0;
}
