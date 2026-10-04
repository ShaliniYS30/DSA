// Problem: Top View of Binary Tree
// Platform: GeeksforGeeks
// Difficulty: Medium
// Language: C++

#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> topView(Node* root) {
    vector<int> ans;

    if (root == nullptr) {
        return ans;
    }

    map<int, int> mp;
    queue<pair<Node*, int>> q;

    // root has horizontal distance 0
    q.push({root, 0});

    while (!q.empty()) {
        Node* node = q.front().first;
        int line = q.front().second;
        q.pop();

        // Store only the first node at this horizontal distance
        if (mp.find(line) == mp.end()) {
            mp[line] = node->data;
        }

        // Left child → horizontal distance -1
        if (node->left != nullptr) {
            q.push({node->left, line - 1});
        }

        // Right child → horizontal distance +1
        if (node->right != nullptr) {
            q.push({node->right, line + 1});
        }
    }

    // map automatically gives left → right order
    for (auto p : mp) {
        ans.push_back(p.second);
    }

    return ans;
}

int main() {

    /*
            1
           / \
          2   3
           \ / \
            4 5  6
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(4);

    root->right->left = new Node(5);
    root->right->right = new Node(6);

    vector<int> ans = topView(root);

    cout << "Top View: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}