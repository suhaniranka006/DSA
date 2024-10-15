#include <climits>  // For INT_MAX
#include <algorithm>

class Solution {
public:


    //by recursion
    //tc o(2^(m+n))
    //sc o(m+n)
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
         int minPathSum(vector<vector<int>>& grid) {
            int m=grid.size();
            int n=grid[0].size();
            vector<vector<int>>dp(m,vector<int>(n,-1));
            return f(m-1,n-1,grid,dp);
         }

        int f(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
            if(i==0 && j==0){
                return grid[i][j];
            }

            if(i<0 || j<0){
                return INT_MAX;
            }

            if(dp[i][j]!=-1){
                return dp[i][j];
            }

            int up=f(i-1,j,grid,dp);
            if(up!=INT_MAX){
                up+=grid[i][j];
            }
            int left=f(i,j-1,grid,dp);
            if(left!=INT_MAX){
                left+=grid[i][j];
            }

            return dp[i][j]=min(up,left);
        }
};