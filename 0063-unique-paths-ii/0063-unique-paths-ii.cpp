class Solution {
public:

        //by rectursion
        //tc o(2^m*n)
        //sc o(m*n)

    // int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    //     //quite similar to previous one with slight changes


    //      int m=obstacleGrid.size();
    //     int n=obstacleGrid[0].size();

    //     if(obstacleGrid[0][0]==1){
    //         return 0;
    //     }
    //     return f(m-1,n-1,obstacleGrid);
        
    // }


    // int f(int i,int j,vector<vector<int>>&obstacleGrid){

       
    //     if(i<0 || j<0 ||  obstacleGrid[i][j]==1){
    //         return 0;
    //     }

    //     if(i==0 && j==0){
    //         return 1;
    //     }
    //     int left=f(i,j-1,obstacleGrid);
    //     int up=f(i-1,j,obstacleGrid);

    //     return left+up;
    // }



    //memoization
    //tc o(m*n)
    //sc o(m*n)+o(m*n)
    //  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

    //     //quite similar to previous one with slight changes


    //      int m=obstacleGrid.size();
    //     int n=obstacleGrid[0].size();
    //         vector<vector<int>>dp(m,vector<int>(n,-1));
    //     if(obstacleGrid[0][0]==1){
    //         return 0;
    //     }
    //     return f(m-1,n-1,obstacleGrid,dp);
        
    // }


    // int f(int i,int j,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp){

       
    //     if(i<0 || j<0 || obstacleGrid[i][j]==1){
    //         return 0;
    //     }

    //     if(i==0 && j==0){
    //         return 1;
    //     }

    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     int left=f(i,j-1,obstacleGrid,dp);
    //     int up=f(i-1,j,obstacleGrid,dp);

    //     return dp[i][j]=left+up;
    // }


    //tabulation
    //tc o(m*n)
    //sc o(m*n)


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int m=obstacleGrid.size();
            int n=obstacleGrid[0].size();
            vector<vector<int>>dp(m,vector<int>(n,-1));

          

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(obstacleGrid[i][j]==1){
                        dp[i][j]=0;
                    }


                    else if(i==0 && j==0){
                        dp[i][j]=1;
                    }
                    else {
                        int up=0,left=0;

                        if(i>0){
                        up=dp[i-1][j];
                        }

                        if(j>0){
                        left=dp[i][j-1];
                        }

                        dp[i][j]=up+left;


                    }
                }
            }
            return dp[m-1][n-1];
    }


};