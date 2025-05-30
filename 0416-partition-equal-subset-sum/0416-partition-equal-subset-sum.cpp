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



    //  bool canPartition(vector<int>& nums) {
    //   int n=nums.size();
    //   int sum=0;
      
    //   for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //   }

    //   if(sum%2!=0){
    //     return false;
    //   }

    //     sum=sum/2;
    //     vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));

    //   return subset(nums,sum,n-1,dp);
        
    // }

    // bool subset(vector<int>&nums,int sum,int n,vector<vector<int>>&dp){
    

    //   if(sum==0){
    //     return true;
    //   }
    //   if(n<0){
    //     return false;
    //   }
      

    //   if(dp[n][sum]!=-1){
    //       return dp[n][sum];
    //   }
    //   bool take=false;
    //   if(nums[n]<=sum){
    //     take =  subset(nums,sum-nums[n],n-1,dp) ;
    //   }
    //   bool nontake = subset(nums,sum,n-1,dp);

    //  return dp[n][sum] =  take || nontake;
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

      sum = sum/2;

      vector<vector<bool>>dp(n,vector<bool>(sum+1,0));


      for(int i=0;i<n;i++){
        dp[i][0]=true;
      }

      if (nums[0] <= sum) {
        dp[0][nums[0]] = true;
    }

      for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
        bool take = false; 

        bool nontake = dp[i-1][j];

        if(nums[i]<=j){
          take = dp[i-1][j-nums[i]];
        }

        dp[i][j]= take || nontake;

        }

      }

      return dp[n-1][sum];


    }

    
};