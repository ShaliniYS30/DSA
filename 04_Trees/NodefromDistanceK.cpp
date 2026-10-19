//Problem:print all nodes from distance K in Binary Tree
//Platform:Leetcode
//Difficulty:Medium
//Language:C++

class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parent;

    void buildParent(TreeNode* root, TreeNode* par) {
        if (root == NULL) {
            return;
        }

        parent[root] = par;

        buildParent(root->left, root);
        buildParent(root->right, root);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        buildParent(root, NULL);

        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(target);
        visited.insert(target);

        int distance = 0;

        while (!q.empty()) {
            int size = q.size();

            if (distance == k) {
                break;
            }

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left != NULL &&
                    !visited.count(node->left)) {
                    q.push(node->left);
                    visited.insert(node->left);
                }

                if (node->right != NULL &&
                    !visited.count(node->right)) {
                    q.push(node->right);
                    visited.insert(node->right);
                }

                if (parent[node] != NULL &&
                    !visited.count(parent[node])) {
                    q.push(parent[node]);
                    visited.insert(parent[node]);
                }
            }

            distance++;
        }

        vector<int> ans;

        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};
