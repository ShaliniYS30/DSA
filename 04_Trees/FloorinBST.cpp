//Problem:Floor in binart tree
//Platform:Leetcode
//difficulty:easy
//Langauge:C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
public:
    int findMaxFork(Node* root, int k) {
        int floor = -1;

        while (root != nullptr) {

            if (root->data == k) {
                return root->data;
            }
            else if (k < root->data) {
                root = root->left;
            }
            else {
                floor = root->data;
                root = root->right;
            }
        }

        return floor;
    }
};

int main() {
    Node* root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(12);
    root->left->left = new Node(2);
    root->left->right = new Node(6);

    int k = 7;

    Solution obj;

    cout << "Floor = " << obj.findMaxFork(root, k);

    return 0;
}
