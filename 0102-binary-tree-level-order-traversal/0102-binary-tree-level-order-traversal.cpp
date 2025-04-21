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

//tc o()
    vector<vector<int>> levelOrder(TreeNode* root) {

          vector<vector<int>>result;
          if(!root){
            return result;
          }
          
          queue<TreeNode*>q;
          q.push(root);

          while(!q.empty()){
            int n=q.size();
            vector<int>currentlevel;

            for(int i=0;i<n;i++){
              TreeNode* curr=q.front();
              q.pop();
              currentlevel.push_back(curr->val);

              if(curr->left){
                q.push(curr->left);
              }
              if(curr->right){
                q.push(curr->right);
              }
            }
          

              result.push_back(currentlevel);
            }

          
              return result;
            

            
          }

    };

        // vector<vector<int>> ans;
        // if (!root) return ans;

        // queue<TreeNode*> q;
        // q.push(root);

        // while (!q.empty()) {
        //     int levelSize = q.size();
        //     vector<int> currentLevel;

        //     for (int i = 0; i < levelSize; ++i) {
        //         TreeNode* node = q.front();
        //         q.pop();
        //         currentLevel.push_back(node->val);

        //         if (node->left) q.push(node->left);
        //         if (node->right) q.push(node->right);
        //     }

        //     ans.push_back(currentLevel);
        // }

        // return ans;



        // vector<vector<int>>ans;

        // if(!root){
        //     return ans;
        // }

        // queue<TreeNode*>q;
        // q.push(root);

        // while(!q.empty()){
        //     int levelsize=q.size();
        //         vector<int>currentlevel;
        //     for(int i=0;i<levelsize;i++){

        //     TreeNode* node=q.front();
        //     q.pop();
        //         currentlevel.push_back(node->val);

        //         if(node->left){
        //             q.push(node->left);
        //         }

        //         if(node->right){
        //             q.push(node->right);
        //         }


        //     }
        //     ans.push_back(currentlevel);

        // }

        // return ans;
    
    