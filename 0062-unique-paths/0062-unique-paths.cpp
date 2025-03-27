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
    //   int uniquePaths(int m, int n) {
    //     vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    //     return f(m-1,n-1,dp);
    //   }


    //   int f(int i,int j,vector<vector<int>>&dp){
    //     if(i==0 && j==0){
    //         return 1;
    //     }
    //     if(i<0 || j<0){
    //         return 0;
    //     }

    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
       
    //     int left=f(i,j-1,dp);
    //     int up=f(i-1,j,dp);
    //     return dp[i][j]=left+up;
    //   }


      //tabulation
      //tc o(n*m)
      //sc o(n*m)
        
        //  int uniquePaths(int m, int n) {

        //     vector<vector<int>>dp(m,vector<int>(n,0));

        //     return f(m,n,dp);

        //  }

        //  int f(int m,int n,vector<vector<int>>&dp){
        //     //base case
        //     for(int i=0;i<m;i++){
        //         for(int j=0;j<n;j++){

        //             if(i==0 && j==0){
        //             dp[i][j]=1;
        //             }
        //             else{
        //                   int up=0;
        //                     int left=0;
        //                 if(j>0){
        //                     left=dp[i][j-1];
        //                 }

        //                 if(i>0){
        //                     up=dp[i-1][j];
        //                 }
        //                 dp[i][j]=up+left;
        //             }

        //         }
        //     }

        //     return dp[m-1][n-1];
        //  }

         //if there we are using prev row and prev col we can do space optimzation 
         //in interviews they dont ask but striver have done it if u want but right now i am not doing it

    int uniquePaths(int m, int n) {

      vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(m-1,n-1,dp);
    }

    //recursion
    //tc o^(m*n)
    //sc o(m-1,n-1)
    // int f(int i,int j){
    //   //base case
    //   if(i==0 && j==0){
    //     return 1;
    //   }

    //   if(i<0 || j<0){
    //     return 0;
    //   }

    //   int left=f(i,j-1);
    //   int right=f(i-1,j);

    //   return left+right;
    // }


    //memoization
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




};