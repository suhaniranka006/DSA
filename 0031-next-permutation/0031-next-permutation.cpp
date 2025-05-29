class Solution {
public:


    void nextPermutation(vector<int>& nums) {

      //brute force
      //reucrsion
      //find all permutation 
      //find current array then find next permutation of this
      //tc o(n!*logn(n)) // to generate and sort

      //better - stl
     // next_permutation(nums.begin(),nums.end());
     //tc o(n)
     //sc o(1)

     //best implementation
     //find decreasing trend nums[i]<nums[i+1] 
     //find nums[j]>nums[j-1]
     //then swap nums[i],nums[j]
     //then reverse suffix from i+1


   //code 

   //tc o(n)
   //sc o(1)
   int n=nums.size();
   int i=n-2;
   //generate i 
   while(i>=0 && nums[i]>=nums[i+1]){
    i--;
   }

   //generate j
   if(i>=0){
    int j=n-1;
    while(nums[j]<=nums[i]){
      j--;
    }

     swap(nums[i],nums[j]);
   }

  

      //reverse
      reverse(nums.begin()+i+1,nums.end());
        
    }
};