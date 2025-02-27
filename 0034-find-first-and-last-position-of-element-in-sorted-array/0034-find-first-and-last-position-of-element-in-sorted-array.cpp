class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {
    //     int st=0;
    //     int end=nums.size()-1;
    //       // vector<int>res;
    //     while(st<=end){
    //         int mid=st+(end-st)/2;


    //         if(nums[mid]==target){
    //                 int first=mid;
    //                 int last=mid;
    //                 while(first>=0 && nums[first]==target){
    //                     first--;
    //                 }
    //                 while(last<nums.size() && nums[last]==target){
    //                     last++;
    //                 }
    //                 //bcz ek baar to hm bina hile hi increment or decrement kr gy as condition satisfy thi
    //                 return {first+1,last-1};
    //         }
    //         else if(nums[mid]>target){
    //             end=mid-1;
    //         }
    //         else{
    //             st=mid+1;
    //         }
    //     }
    //     return {-1,-1};
    // }

  
    int st=0;
    int n=nums.size();
    int end=n-1;

    while(st<=end){
      int mid=(st+end)/2;

      if(nums[mid]==target){
        int first=mid;
        int last=mid;
      
      while(first>=0 && nums[first]==target){
        first--;
      }

      while(last<=end && nums[last]==target){
        last++;
      }


    //bcz in first chance we incremented and decremented without changing position
      return {first+1,last-1};
      }
      else if(nums[mid]<target){
        st=mid+1;
      }
      else{
        end=mid-1;
      }

    }


    return {-1,-1};
}
    // tc o(n)
    //sc o(1)
};