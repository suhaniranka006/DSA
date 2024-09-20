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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();

        stack<TreeNode*>st;

        TreeNode *root=new TreeNode(postorder[n-1]);
        st.push(root);

        int postIndex=n-2;
        int inIndex=n-1;

        while(postIndex>=0){
            TreeNode *cn=NULL;

            while(!st.empty() && st.top()->val==inorder[inIndex]){
                cn=st.top();
                st.pop();
                inIndex--;
            }
            TreeNode *nn= new TreeNode(postorder[postIndex]);

            if(cn){
                cn->left=nn;
            }
            else{
                st.top()->right=nn;
            }
            st.push(nn);
            postIndex--;
        }
        return root;
        
    }
};