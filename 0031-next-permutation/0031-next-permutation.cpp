class Solution {
public:
//     void nextPermutation(vector<int>& nums) {
//         //brute force 
//         // 1.generate all permutations -- by recursion(sorted)
//         // 2.linear search for given permutation
//         // 3.find next permutation

//         //t(n!*n)
//         //sc(o(n)+o(n))

//         //better for cpp usrs
//         //we have inbuilt next_permutation stl

//         //next_permutation(nums.begin(),nums.end()); // by stl

//     //     //best
//     //     //apply stl 
//     //     //logest prefix match
//     //     //find >i but smallest one
//     //     //try to place remaining in sorted way

//     //     //find break point
//     //     int ind=-1;
//     //     int n=nums.size();
//     //     for(int i=n-2;i>=0;i--){
//     //         if(nums[i]>nums[i+1]){
//     //             ind=i; //break pt
//     //             break;
//     //         }
//     //     }

//     //     //if break pt doent exist
//     //     if(ind==-1){
//     //         reverse(nums.begin(),nums.end());
            
//     //     }
//     //     //find next greater eleemnt
//     //     for(int i=n-1;i>=0;i--){
//     //         if(nums[i]>nums[ind]){
//     //             swap(nums[i],nums[ind]);
//     //             break;
//     //         }
//     //     }

//     //     //reverse remaining
//     //     reverse(nums.begin()+ind+1,nums.end());
        

        
//     // }

//     solve(nums);
//     }


//    void solve(vector<int>&nums){
//          //best
//         //apply stl 
//         //logest prefix match
//         //find >i but smallest one
//         //try to place remaining in sorted way

//         //find break point
//         int ind=-1;
//         int n=nums.size();
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 ind=i; //break pt
//                 break;
//             }
//         }

//         //if break pt doent exist
//         if(ind==-1){
//             reverse(nums.begin(),nums.end());
//             return ;
            
//         }
//         //find next greater eleemnt
//         for(int i=n-1;i>ind;i--){
//             if(nums[i]>nums[ind]){
//                 swap(nums[i],nums[ind]);
//                 break;
//             }
//         }

//         //reverse remaining
//         reverse(nums.begin()+ind+1,nums.end());
        
// //tc o(n)
// //sc o(1)
        
//     }
    
     void nextPermutation(vector<int>& nums) {

      next_permutation(nums.begin(),nums.end());


     }
};