//Problem :construct Complete Binary Tree by PreOrder and Inorder
//Platform:leetcode
//Difficulty:Medium
//Language:C++

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
         return buildTree(preorder, 0, preorder.size() - 1,
                         inorder, 0, inorder.size() - 1, map);
    }
        TreeNode* buildTree(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int inStart,int inEnd,unordered_map<int,int>&map){
            if(prestart>preend||inStart>inEnd){
                return 0;
            }
            TreeNode * root=new TreeNode(preorder[prestart]);
            int inRoot=map[root->val];
            int numsleft=inRoot-inStart;
            root->left=buildTree(preorder,prestart+1,prestart+numsleft,inorder, inStart,inRoot-1,map);
            root->right=buildTree(preorder,prestart+numsleft+1,preend,inorder ,inRoot+1,inEnd,map);
            return root;

        
    }
    
};