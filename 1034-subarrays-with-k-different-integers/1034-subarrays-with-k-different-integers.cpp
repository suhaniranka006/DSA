class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
          if (k == 0) return 0;
        return f(nums,k)-f(nums,k-1);
    }

    int f(vector<int>&nums,int k){
      int left=0;
      unordered_map<int,int>freq;
      int res=0;
      int result=0;

      for(int right=0;right<nums.size();right++){
        int num=nums[right];
        freq[num]++;
      

      //shrink
      while(freq.size()>k){
        int leftnum=nums[left];
        freq[leftnum]--;
        if(freq[leftnum]==0){
          freq.erase(leftnum);

        }
        left++;
      }
      result+=right-left+1;
      }
      return result;
      
    }
};