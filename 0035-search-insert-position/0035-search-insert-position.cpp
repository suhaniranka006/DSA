class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();


        if(target<nums[0]){
          return 0;
        }
        int st=0;
        int end=n-1;

        int temp=0;
        while(st<=end){
          int mid=(st+end)/2;

          if(nums[mid]==target){
            return mid;
          }
          else if(nums[mid]<target){
            temp=mid;
            st=mid+1;
          }
          else{
            end=mid-1;
          }
        }
        return temp+1;
    }
};