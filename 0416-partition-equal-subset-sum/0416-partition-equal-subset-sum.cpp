class Solution {
public:
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

          vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
       return f(nums,n-1,sum/2,dp);
    }

    bool f(vector<int>&nums,int idx,int target,vector<vector<int>>&dp){


      if(target==0){
        return true;
      }
      if(idx<0){
        return false;
      }


      if(dp[idx][target]!=-1){
        return dp[idx][target];
      }
      bool nontake=f(nums,idx-1,target,dp);

    bool take = false;
      if(nums[idx]<=target){
        take  = f(nums,idx-1,target-nums[idx],dp);
        

      }
      return dp[idx][target] =  take || nontake;

    }
};