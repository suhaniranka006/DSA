class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int n=nums.size();
      int result=nums[0];
      int maxsofar=nums[0];
      int minsofar=nums[0];

      for(int i=1;i<n;i++){
        //handle -ve elements
        if(nums[i]<0){
          swap(maxsofar,minsofar);
        }

        maxsofar=max(nums[i],nums[i]*maxsofar);
        minsofar=min(nums[i],nums[i]*minsofar);

        result=max(result,maxsofar);
      }
        
        return result;
    }
};