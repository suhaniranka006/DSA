class Solution {
public:
    // bool canPartition(vector<int>& nums) {
       

    //    int n=nums.size();
    //     int sum=0;
    //    for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //    }
    //    if(sum%2!=0){
    //     return false;
    //    }
    //    int target=sum/2;

    //       vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    //    return f(nums,n-1,sum/2,dp);
    // }

    // bool f(vector<int>&nums,int idx,int target,vector<vector<int>>&dp){


    //   if(target==0){
    //     return true;
    //   }
    //   if(idx<0){
    //     return false;
    //   }


    //   if(dp[idx][target]!=-1){
    //     return dp[idx][target];
    //   }
    //   bool nontake=f(nums,idx-1,target,dp);

    // bool take = false;
    //   if(nums[idx]<=target){
    //     take  = f(nums,idx-1,target-nums[idx],dp);
        

    //   }
    //   return dp[idx][target] =  take || nontake;

    // }


       bool canPartition(vector<int>& nums) {
        int n=nums.size();
       

      int sum=0;
      for(int i=0;i<n;i++){
        sum+=nums[i];
      }

      if(sum%2!=0){
        return false;
      }
      int target=sum/2;

       vector<vector<bool>>dp(n,vector<bool>(target+1,0));


 for (int i = 0; i < n; i++) dp[i][0] = true; // target = 0 can be formed by empty set

    if (nums[0] <= target)
        dp[0][nums[0]] = true;


      for(int i=1;i<n;i++){
        for(int j=0;j<=target;j++){
          bool nontake = dp[i-1][j];
          bool take=false;
          if(nums[i]<=j){
            take=dp[i-1][j-nums[i]];
          }
          dp[i][j]=take ||nontake;
        }
      }

        return dp[n-1][target];
      }






};