//Problem:Insert Node ino BST
//Platform:Leetcode
//Language:C++
//Difficulty:Medium
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* insertIntoBST(TreeNode* root, int val) {

    if (root == NULL) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    }
    else {
        root->right = insertIntoBST(root->right, val);
    }

    return root;
}

void inorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int val = 5;

    root = insertIntoBST(root, val);

    cout << "BST after insertion: ";
    inorder(root);

    return 0;
}
