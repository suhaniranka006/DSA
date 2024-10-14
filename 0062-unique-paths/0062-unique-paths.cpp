class Solution {
public:

    //recursion
    //tc o(2^m*n)
    //sc o(m-1)+o(n-1) path length
    // int uniquePaths(int m, int n) {
    //     return f(m-1,n-1);     
    // }

    // int f(int i,int j){
    //     //base case

    //     if(i==0 && j==0){
    //         return 1;
    //     }
    //     if(i<0 || j<0){
    //         return 0;
    //     }

    //     int left=f(i,j-1);
    //     int up=f(i-1,j);
    //     return left+up;
    // }



        //tc o(n*m)
        //sc o(m-1)+o(n-1) + o(n*m)
      int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(m-1,n-1,dp);
      }

      int f(int i,int j,vector<vector<int>>&dp){
        if(i==0 && j==0){
            return 1;
        }
        if(i<0 || j<0){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }
       
        int left=f(i,j-1,dp);
        int up=f(i-1,j,dp);
        return dp[i][j]=left+up;
      }


      //tabulation
      //tc o(n*m)
      //sc o(n*m)
        
        //  int uniquePaths(int m, int n) {

        //  }

};