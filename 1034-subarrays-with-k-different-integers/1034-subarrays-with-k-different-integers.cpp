class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
            
            return f(nums,k)-f(nums,k-1);

    }            

    int f(vector<int>&nums,int k){
      int left=0;
      int result=0;

      unordered_map<int,int>freq;

      int n=nums.size();

      for(int right=0;right<n;right++){
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