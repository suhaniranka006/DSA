class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>vis(n,vector<int>(m,1));

        f(matrix,vis,n,m);

      
    }

    void f(vector<vector<int>>&matrix,vector<vector<int>>&vis,int n,int m){


      for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
          if(matrix[i][j]==0){
            vis[i][j]=0;
          }
        }
      }

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(vis[i][j]==0){
            for(int r=0;r<n;r++){
              matrix[r][j]=0;
            }

            for(int c=0;c<m;c++){
              matrix[i][c]=0;
            }
          }
        }
      }


    }
};