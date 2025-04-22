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

         //tc o(n)
      //sc o(n)
      //dfs recursive
      
      void flatten(TreeNode* root){
        TreeNode* prev=NULL;
        return f(root,prev);
      }
    void f(TreeNode* root,TreeNode* &prev) {
     
      if(root==NULL){
        return;
      }
      f(root->right,prev);
      f(root->left,prev);
      root->right=prev;
      root->left=NULL;
      prev=root;
    }

    ////bfs -- q -- iterative --uses extra space
    //morris traversal -- space optmised
};