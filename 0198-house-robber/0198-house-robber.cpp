class Solution {
public:
    int rob(vector<int>& nums) {
        //recursion
        //tc o(2^n)
        //sc o(n)
        // int n=nums.size();
        // return f(n-1,nums);


        //memo
        
        int n=nums.size();
        if(n==0){
          return 0;
        }
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
    }

    int f(int ind,vector<int>&nums,vector<int>&dp){
      if(ind<0){
        return 0;
      }
      if(ind==0){
        return nums[0];
      }

      if(dp[ind]!=-1){
        return dp[ind];
      }

      int pick = nums[ind]+f(ind-2,nums,dp);
      int nonpick = 0+f(ind-1,nums,dp);

    dp[ind]=max(pick,nonpick);
    return dp[ind];
    }



    //recursion
    // int f(int ind,vector<int>&nums){
    //   int n=nums.size();
    //     //base case
    //     if(ind<0){
    //       return 0;
    //     }
    //     if(ind==0){
    //       return nums[ind];
    //     }

      
    //       int pick =nums[ind]+f(ind-2,nums);
    //       int nonpick = 0+f(ind-1,nums);
        
    //     return max(pick,nonpick);
    // }
};

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


    //tc o(2^n) *k
    //sc o(n)


    //as in this problem we will find overlapping recursion subproblems so we can use memoization
    //as f(1) will hit everytime



    //memoization
    //tc o(n)
    //sc o(n)+o(n)

    // int rob(vector<int>&nums){
    //     int n=nums.size();
    //     vector<int>dp(n,-1);
    //     return f(0,nums,dp);
        
    // }

    // int f(int ind,vector<int>&nums,vector<int>&dp){
    //    if(ind>=nums.size()){
    //     return 0;
    //    }
    //     if(dp[ind]!=-1){
    //         return dp[ind];
    //     }

    //     int pick=nums[ind]+f(ind+2,nums,dp);
    //     int nonPick=f(ind+1,nums,dp);

    //     return dp[ind]=max(pick,nonPick);


    // }




//tabulation
//tc o(n)
//sc o(n)


    // int rob(vector<int>&nums){
    //     int n=nums.size();
    //     vector<int>dp(n,-1);
    //    // return f(n-1,nums,dp);

    //    return f(n-1,nums);
    // }


    // int f(int ind,vector<int>&nums,vector<int>&dp){
    //     dp[0]=nums[0];
    //     int neg=0;

    //     for(int i=1;i<nums.size();i++){
    //         int take=nums[i];
    //         if(i>1){
    //             take+=dp[i-2];
    //         }
    //         int nonTake=0+dp[i-1];

    //         dp[i]=max(take,nonTake);

    //     }

    //     return dp[ind];
    // }






    //space optimisation
    //tc o(n)
    //sc o(1)

    // int f(int ind,vector<int>&nums){
    //     int prev=nums[0];
    //     int prev2=0;

    //     for(int i=1;i<nums.size();i++){
    //         int take=nums[i];
    //         if(i>1){
    //             take+=prev2;
    //         }
    //         int nonTake=prev;

    //         int curr=max(take,nonTake);
    //         prev2=prev;
    //         prev=curr;
    //     }

    //     return prev;
    // }
