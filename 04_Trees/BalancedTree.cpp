//Problem:Check balance tree
//Platform:Leetcode
//Difficulty:medium
//language:c++
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (leftHeight == -1 || rightHeight == -1) {
        return -1;
    }

    if (abs(leftHeight - rightHeight) > 1) {
        return -1;
    }

    return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(Node* root) {
    return height(root) != -1;
}

int main() {

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    if (isBalanced(root)) {
        cout << "Tree is Balanced" << endl;
    } else {
        cout << "Tree is Not Balanced" << endl;
    }

    return 0;
}