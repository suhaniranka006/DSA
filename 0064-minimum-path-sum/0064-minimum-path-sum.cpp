class Solution {
public:
   //by recursion
    //tc o(2^(m*n))
    //sc o(m-1,n-1)
    // int minPathSum(vector<vector<int>>& grid) {
    //     int m=grid.size();
    //     int n=grid[0].size();

    //     return f(m-1,n-1,grid);
        
    // }
    // int f(int i,int j,vector<vector<int>>&grid){
    //     if(i==0 && j==0){
    //         return grid[i][j];
    //     }

    //     if(i<0 || j<0){
    //         return INT_MAX;
    //     }

    //     int up=f(i-1,j,grid);
    //     if(up!=INT_MAX){
    //         up+=grid[i][j];
    //     }

    //     int left=f(i,j-1,grid);
    //     if(left!=INT_MAX){
    //         left+=grid[i][j];
    //         }

    //     return min(up,left);
    // }




        //by memoization
        //tc o(m*n)
        //sc o(m-1,n-1) + o(m+n)
        //  int minPathSum(vector<vector<int>>& grid) {
        //     int m=grid.size();
        //     int n=grid[0].size();
        //     vector<vector<int>>dp(m,vector<int>(n,-1));
        //     return f(m-1,n-1,grid,dp);
        //  }

        // int f(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        //     if(i==0 && j==0){
        //         return grid[i][j];
        //     }

        //     if(i<0 || j<0){
        //         return INT_MAX;
        //     }

        //     if(dp[i][j]!=-1){
        //         return dp[i][j];
        //     }

        //     int up=f(i-1,j,grid,dp);
        //     if(up!=INT_MAX){
        //         up+=grid[i][j];
        //     }
        //     int left=f(i,j-1,grid,dp);
        //     if(left!=INT_MAX){
        //         left+=grid[i][j];
        //     }

        //     return dp[i][j]=min(up,left);
        // }

            //tabulation
            //tc o(m*n)
            //sc o(m+n)
            //  int minPathSum(vector<vector<int>>& grid) {
            //     int m=grid.size();
            //     int n=grid[0].size();
            //     vector<vector<int>>dp(m,vector<int>(n,-1));

            //     for(int i=0;i<m;i++){
            //         for(int j=0;j<n;j++){

            //             if(i==0 && j==0){
            //             dp[i][j]=grid[0][0];
            //             }
            //             else{
            //                 int up=0,left=0;
            //                 if(i>0){
            //                 up=grid[i][j]+dp[i-1][j];
            //                 }
            //                 else{
            //                     up=INT_MAX;
            //                 }

            //                 if(j>0){
            //                 left=grid[i][j]+dp[i][j-1];
            //                 }
            //                 else{
            //                     left=INT_MAX;
            //                 }
            //                 dp[i][j]=min(up,left);
            //             }
            //         }
            //     }
            //     return dp[m-1][n-1];

          //   }



//tc o^m*n
// sc o^m*n


    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp);
    }

    // int f(int i,int j,vector<vector<int>>&grid){
    //   //base case
    //   if(i==0 && j==0){
    //     return grid[i][j];
    //   }

    //   if(i<0 || j<0){
    //     return INT_MAX;
    //   }

    //   int up=f(i,j-1,grid);
    //   if(up!=INT_MAX){
    //     up = up+grid[i][j];
    //   }

    //   int left=f(i-1,j,grid);
    //   if(left!=INT_MAX){
    //     left = left+grid[i][j];
    //   }

    //   return min(up,left);
    // }



  int f(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
      //base case
      if(i==0 && j==0){
        return grid[i][j];
      }

      if(i<0 || j<0){
        return INT_MAX;
      }

      int up=f(i,j-1,grid,dp);
      if(up!=INT_MAX){
        up = up+grid[i][j];
      }

    if(dp[i][j]!=-1){
      return dp[i][j];
    }
      int left=f(i-1,j,grid,dp);
      if(left!=INT_MAX){
        left = left+grid[i][j];
      }

      return dp[i][j] =  min(up,left);
    }


};