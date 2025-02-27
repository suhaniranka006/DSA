class Solution {
public:
    int search(vector<int>& nums, int target) {
    //     int n=nums.size();

    //     int start=0;
    //     int end=n-1;

    //     while(start<=end){
    //       int mid=(start+end)/2;

    //       if(nums[mid]==target){
    //         return mid;
    //       }

    //       else if(target<nums[mid]){
    //         end=mid-1;
    //       }
    //       else{
    //         start=mid+1;
    //       }
    //     }
    //     return -1;
    // }


    //better

        int n=nums.size();

       return solve(0,n-1,nums,target);
      
      
    }



    int solve(int st,int end,vector<int>&nums,int target){
      //base case
      if(st>end){
        return -1;
      }
          int mid=(st+end)/2;
          if(nums[mid]==target){
            return mid;
          }


          else if(target<nums[mid]){
  

            return solve(0,mid-1,nums,target);
          }


      
          else{ 
             return solve(mid+1,end,nums,target);
          
          }
      }
    
    
};