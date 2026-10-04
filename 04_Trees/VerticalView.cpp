// Problem: Vertical Order Traversal of a Binary Tree
// Platform: LeetCode
// Problem Number: 987
// Difficulty: Hard
// Language: C++

#include <iostream>
#include <vector>
#include <map>
#include <set>
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

vector<vector<int>> verticalTraversal(TreeNode* root) {

    vector<vector<int>> ans;

    if (root == nullptr) {
        return ans;
    }

    // column -> row -> values
    map<int, map<int, multiset<int>>> nodes;

    // node -> {column, row}
    queue<pair<TreeNode*, pair<int, int>>> q;

    q.push({root, {0, 0}});

    while (!q.empty()) {

        auto p = q.front();
        q.pop();

        TreeNode* node = p.first;
        int column = p.second.first;
        int row = p.second.second;

        // Store the node
        nodes[column][row].insert(node->val);

        // Left child
        if (node->left != nullptr) {
            q.push({
                node->left,
                {column - 1, row + 1}
            });
        }

        // Right child
        if (node->right != nullptr) {
            q.push({
                node->right,
                {column + 1, row + 1}
            });
        }
    }

    // Read column by column
    for (auto columnPair : nodes) {

        vector<int> columnValues;

        // Read row by row
        for (auto rowPair : columnPair.second) {

            // multiset gives sorted values
            for (int value : rowPair.second) {
                columnValues.push_back(value);
            }
        }

        ans.push_back(columnValues);
    }

    return ans;
}

int main() {

    /*
              1
             / \
            2   3
           / \ / \
          4  5 6  7

        Vertical Traversal:

        [-2] -> 4
        [-1] -> 2
        [ 0] -> 1 5 6
        [ 1] -> 3
        [ 2] -> 7
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> ans = verticalTraversal(root);

    cout << "Vertical Traversal:" << endl;

    for (vector<int> column : ans) {

        for (int value : column) {
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}