class Solution {
public:
    int search(vector<int>& nums, int target) {
        //brute force -- linear search

    //     int st=0;
    //     int end=nums.size()-1;
    //     while(st<=end){
    //      int mid=(st+end)/2;
    //         if(target==nums[mid]){
    //             return mid;
    //         }
    //         if (nums[mid]>=nums[st]){
    //             if(target>=nums[st] && target<=nums[mid]){
    //                 end=mid-1;
    //             }
    //             else{
    //                 st=mid+1;
    //             }

    //         }
    //         else{
    //             if(target<=nums[end] && target>=nums[mid]){
    //                 st=mid+1;
    //             }
    //             else{
    //                 end=mid-1;
    //             }
    //         }
    //     }
    //     return -1;
    // }



  //   int st=0;
  //   int end=nums.size()-1;
  //   while(st<=end){
  //       int mid=(st+end)/2;

  //       if(nums[mid]==target){
  //           return mid;
  //       }
  //        if(nums[mid]>=nums[st]){
  //           if(target>=nums[st] && target<=nums[mid]){
  //               end=mid-1;
  //           }
  //           else{
  //               st=mid+1;
  //           }
  //        }
  //  else{
  //        if(target<=nums[end] && target>=nums[mid]){
  //           st=mid+1;
  //        }
  //        else{
  //           end=mid-1;
  //        }
  //   }
  //   }
  //   return -1;


    int n=nums.size();
    int st=0;
    int end=n-1;

    //find pivot 
    //find target index

    while(st<=end){
      int mid=(st+end)/2;

      if(nums[mid]==target){
        return mid;
      }
      
      if(nums[st]<=nums[mid]){
        if(target>=nums[st]  && target<nums[mid]){
          end=mid-1;
        }
        else{
            st=mid+1;
        }
      }
      else {
        if(target>nums[mid] && target<=nums[end]){
          st=mid+1;
        }
        else{
          end=mid-1;
        }

      }
    }
    return  -1;


    }
};
