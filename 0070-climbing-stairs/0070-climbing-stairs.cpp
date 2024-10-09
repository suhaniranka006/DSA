class Solution {
public:
    int climbStairs(int n) {

        //best approach
        // if(n<=1){
        //     return 1;
        // }
        // int prev1=1;
        // int prev2=1;
        // int curr;

        // for(int i=2;i<=n;i++){
        //     curr=prev1+prev2;
        //     prev2=prev1;
        //     prev1=curr;
        // }

        // return curr;
        //tc o(n)
        //sc o(1)


        //by memoization
        //tc o(n)
        //sc o(n)+o(n) for stack and vector
    //   vector<int>dp(n+1,-1);
    //  return  memo(n,dp);


    //by tabulation
    vector<int>dp(n+1,-1);

    dp[0]=1;
    dp[1]=1;
    int i;
    for( i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
        
    }


    // int memo(int n,vector<int>&dp){
    //     if(n<=1){
    //         return 1;
    //     }

    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }

    //     return dp[n]=memo(n-1,dp)+memo(n-2,dp);
    // }
};