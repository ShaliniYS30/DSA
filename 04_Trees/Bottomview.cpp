// Problem: Bottom View of Binary Tree
// Platform: GeeksforGeeks
// Difficulty: Medium
// Language: C+
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

vector<int> bottomView(Node* root) {
    vector<int> ans;

    if (root == nullptr) {
        return ans;
    }

    map<int, int> mp;
    queue<pair<Node*, int>> q;
    ` NBRa
    q.push({root, 0});

    while (!q.empty()) {

        Node* node = q.front().first;
        int line = q.front().second;

        q.pop();

    
        mp[line] = node->data;

    
        if (node->left != nullptr) {
            q.push({node->left, line - 1});
        }

    
        if (node->right != nullptr) {
            q.push({node->right, line + 1});
        }
    }


    for (auto p : mp) {
        ans.push_back(p.second);
    }

    return ans;
}

int main() {


    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(4);

    root->right->left = new Node(5);
    root->right->right = new Node(6);

    vector<int> ans = bottomView(root);

    cout << "Bottom View: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}