class Solution {
public:
    // bool canPartition(vector<int>& nums) {
    //   int n=nums.size();
    //   int sum=0;
    //   for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //   }

    //   if(sum%2!=0){
    //     return false;
    //   }

    //   return subset(nums,sum/2,n-1);
        
    // }

    // bool subset(vector<int>&nums,int sum,int n){
    //   if(n<0){
    //     return false;
    //   }
    //   if(sum==0){
    //     return true;
    //   }

    //   bool take=false;
    //   if(nums[n]<=sum){
    //     take =  subset(nums,sum-nums[n],n-1) ;
    //   }
    //   bool nontake = subset(nums,sum,n-1);

    //  return take || nontake;
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

        sum=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));

      return subset(nums,sum,n-1,dp);
        
    }

    bool subset(vector<int>&nums,int sum,int n,vector<vector<int>>&dp){
    

      if(sum==0){
        return true;
      }
      if(n<0){
        return false;
      }
      

      if(dp[n][sum]!=-1){
          return dp[n][sum];
      }
      bool take=false;
      if(nums[n]<=sum){
        take =  subset(nums,sum-nums[n],n-1,dp) ;
      }
      bool nontake = subset(nums,sum,n-1,dp);

     return dp[n][sum] =  take || nontake;
    }
};