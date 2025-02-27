class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int start=0;
        int end=n-1;

        while(start<=end){
          int mid=(start+end)/2;

          if(nums[mid]==target){
            return mid;
          }

          else if(target<nums[mid]){
            end=mid-1;
          }
          else{
            start=mid+1;
          }
        }
        return -1;
    }
};