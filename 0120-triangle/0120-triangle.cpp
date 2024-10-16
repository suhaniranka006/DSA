class Solution {
public:

//by recursion
//sc o(n)
    // int minimumTotal(vector<vector<int>>& triangle) {
    //     int m=triangle.size();
    //     int n=triangle[0].size();
    //     return f(0,0,triangle,m,n);
        
    // }

    // int f(int i,int j,vector<vector<int>>&triangle,int m,int n){
    //     if(i==m-1){
    //         return triangle[i][j];
    //     }

    //     int down=triangle[i][j]+f(i+1,j,triangle,m,n);
    //     //to prevent out of bound error
    //     int diagonal=INT_MAX;

    //     if(j+1<triangle[i+1].size()){

    //     diagonal=triangle[i][j]+f(i+1,j+1,triangle,m,n);
    //     }
    //     return min(down,diagonal);
    // }

        //memoization


        int minimumTotal(vector<vector<int>>& triangle) {
            int m=triangle.size();
            int n=triangle[m-1].size();
            vector<vector<int>>dp(m,vector<int>(n,-1));
            return f(0,0,triangle,dp,m,n);

       }

       int f(int i,int j,vector<vector<int>>&triangle,vector<vector<int>>&dp,int m,int n){
        if(i==m-1){
            return triangle[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int up=triangle[i][j]+f(i+1,j,triangle,dp,m,n);

        int diagonal=INT_MAX;

        if(j+1<triangle[i+1].size()){
            diagonal=triangle[i][j]+f(i+1,j+1,triangle,dp,m,n);
        }
        return dp[i][j]=min(up,diagonal);
       }

};