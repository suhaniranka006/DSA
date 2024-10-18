class Solution {
public:


//its just like pevious one
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=nums[i];
    }

    int target=totalSum/2;

    if(totalSum%2!=0){
        return false;
    }

    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    return f(n-1,nums,target,dp);
        
    }


     bool f(int ind,vector<int>&arr,int sum,vector<vector<int>>&dp){
        
        if(sum==0){
            return true;
        }
        
        if(ind==0){
            return (arr[0]==sum);
        }
            
            
            if(dp[ind][sum]!=-1){
                return dp[ind][sum];
            }
            bool notTake=f(ind-1,arr,sum,dp);
            bool take=false;
        
        
        if(arr[ind]<=sum){
            take=f(ind-1,arr,sum-arr[ind],dp);
        }
        
        return dp[ind][sum]=take | notTake;
    }
};