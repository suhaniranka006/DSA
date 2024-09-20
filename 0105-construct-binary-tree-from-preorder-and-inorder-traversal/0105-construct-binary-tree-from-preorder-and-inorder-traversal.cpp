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
        int n=preorder.size();

        stack<TreeNode*>st;
        TreeNode* root=new TreeNode(preorder[0]);
        st.push(root);

        int preIndex=1;
        int inIndex=0;

        while(preIndex<n){
            TreeNode* cn=NULL;

            while(!st.empty() && st.top()->val==inorder[inIndex]){
                cn=st.top();
                st.pop();
                inIndex++;
            }

            TreeNode* nn=new TreeNode(preorder[preIndex]);
            if(cn){
                cn->right=nn;
            }
            else{
                st.top()->left=nn;
            }

            st.push(nn);
            preIndex++;
        }

        return root;
    }
};