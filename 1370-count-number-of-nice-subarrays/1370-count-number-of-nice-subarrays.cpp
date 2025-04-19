class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //sliding window
        return f(nums,k)-f(nums,k-1);
    }
    int f(vector<int>&nums,int k){
      if(k<0){
        return 0;
      }

      int left=0;
      int count=0;
      int currsum=0;

      for(int right=0;right<nums.size();right++){
        int temp=nums[right];
        if(temp%2!=0){
          count++;
        }
        

        //shrink
        while(count>k){
          if(nums[left]%2!=0){
          count--;
          }
          left++;
        }

        currsum+=right-left+1;
        
      }
      return currsum;
    }
};