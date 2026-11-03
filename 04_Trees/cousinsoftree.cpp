#include <iostream>
#include <queue>
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
    bool isCousins(TreeNode* root, int x, int y) {

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();

            bool foundX = false;
            bool foundY = false;

            for (int i = 0; i < n; i++) {

                TreeNode* node = q.front();
                q.pop();

                // Check whether x and y are siblings
                if (node->left && node->right) {

                    if ((node->left->val == x && node->right->val == y) ||
                        (node->left->val == y && node->right->val == x)) {
                        return false;
                    }
                }

                if (node->left) {

                    if (node->left->val == x)
                        foundX = true;

                    if (node->left->val == y)
                        foundY = true;

                    q.push(node->left);
                }

                if (node->right) {

                    if (node->right->val == x)
                        foundX = true;

                    if (node->right->val == y)
                        foundY = true;

                    q.push(node->right);
                }
            }

            if (foundX && foundY)
                return true;

            if (foundX || foundY)
                return false;
        }

        return false;
    }
};

// Print result
int main() {

    /*
            1
           / \
          2   3
           \   \
            4   5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(5);

    int x = 4;
    int y = 5;

    Solution obj;

    if (obj.isCousins(root, x, y))
        cout << "True - They are Cousins";
    else
        cout << "False - They are Not Cousins";

    return 0;
}