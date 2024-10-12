class Solution {
public:


//by recursion
//tc 2^n
//sc o(n)
    // int rob(vector<int>& nums) {

    //     int  n=nums.size();
    //     return f(n-1,nums);
        

    // }


    // int f(int ind,vector<int>&nums){
    //     if(ind==0){
    //         return nums[ind];
    //     }
    //     if(ind<0){
    //         return 0;
    //     }

    //     int pick=nums[ind]+f(ind-2,nums);
    //     int nonPick=0+f(ind-1,nums);

    //     return max(pick,nonPick);
    // }


    //tc o(2^n)
    //sc o(n)

    //as in this problem we will find overlapping recursion subproblems so we can use memoization
    //as f(1) will hit everytime

    //memoization
    //tc o(n)^k
    //sc o(n)+o(n)

    int rob(vector<int>&nums){
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(0,nums,dp);
        
    }

    int f(int ind,vector<int>&nums,vector<int>&dp){
       if(ind>=nums.size()){
        return 0;
       }

       

        if(dp[ind]!=-1){
            return dp[ind];
        }

        int pick=nums[ind]+f(ind+2,nums,dp);
        int nonPick=f(ind+1,nums,dp);

        return dp[ind]=max(pick,nonPick);


    }






};