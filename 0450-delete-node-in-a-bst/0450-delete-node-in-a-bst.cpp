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


    int successor(TreeNode* root){
        if(root==NULL){
            return -1;
        }

        if(root->left==NULL){
            return root->val;

        }

        return successor(root->left);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }


    if(key>root->val){
        root->right=deleteNode(root->right,key);
    }
    else if(key<root->val){
        root->left=deleteNode(root->left,key);
    }
    else {
        if(root->left==NULL){
            return root->right;
        }

        if(root->right==NULL){
            return root->left;
        }
        root->val=successor(root->right);
        root->right=deleteNode(root->right,root->val);

        
    }

    return root;

        
    }
};