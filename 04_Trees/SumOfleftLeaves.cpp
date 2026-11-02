#include <iostream>
using namespace std;
 struct TreeNode {
     int val;
    TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
            if (root->left != nullptr &&
    root->left->left == nullptr &&
    root->left->right == nullptr) {
    return root->left->val+sumOfLeftLeaves(root->right);
}
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
int main(){
    TreeNode* root=new TreeNode(40);
    root->left=new TreeNode(30);
    root->right = new TreeNode(7);
root->left->left = new TreeNode(1);
root->left->right = new TreeNode(3);
Solution obj;
int result = obj.sumOfLeftLeaves( root);
cout<<"Sum of leaves"<<result;
return 0;
}