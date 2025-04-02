class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


   //latest solutions
   //2 pointer -- not applied below sol is wrong never go for this
   //we cant use 2pointer solution where we need to return the indices bcz it will manipulate original indices
   //and will give us wrong answer 

//    sort(nums.begin(),nums.end());

//    int st=0;
//    int end=nums.size()-1;

//    while(st<end){
//     if((nums[st]+nums[end])>target){
//       end--;
//     }
//     else if((nums[st]+nums[end])<target){
//       st++;
//     }
//     else {
//       return {st,end};
//     }
//    }
// return {};
//    }



//brute force

for(int i=0;i<nums.size();i++){
  for(int j=i+1;j<nums.size();j++){
    int sum=nums[i]+nums[j];
    if(sum==target){
      return {i,j};
    }
  }
}
  return {};
}



    















            //worst
       // vector<vector<int>> pairs = sum(nums, target);

    // Flatten the 2D result vector into a 1D vector
    // vector<int> result;
    // for (auto& pair : pairs) {
    //     result.push_back(pair[0]);
    //     result.push_back(pair[1]);
    // }

    // return result;


    //brute
    //    for(int i=0;i<nums.size();i++){
    //        for(int j=i+1;j<nums.size();j++){
    //            int ans=nums[i]+nums[j];
    //            if(ans==target){
    //                return {i,j};
    //            }
    //        }
    //    }
      
    
    // return {};  
      //it is needed to say the function is returning the empty vector when no 2 desired numbers found

    


//by hashmaps
//take time to understand
// unordered_map<int,int> hash;
// for(int i=0;i<nums.size();i++){
//     int complement =target-nums[i];
//     if(hash.find(complement)!=hash.end())
//     {
//         return {hash[complement],i};
//     }
//     hash[nums[i]]=i;
// }
// return {};

// //tc:o(n)
// //sc:o(n)--we are using hash






//brute approach
// vector<int>result;
// for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         if(nums[i]+nums[j]==target){
//             return {i,j};
//         }
//     }

// }
// return {};
    // tc : o(n^2)
    // sc: o(1) constant space for result



        //better appraoch  -- not for all testcases in leetcode but in gfg passwd all testcases
        // vector<int>result;
        // int st=0;
        // int end=nums.size()-1;
        // while(st<end){
        //     int sum=nums[st]+nums[end];
        //     if(sum<target){
        //             st++;
        //     }
        //     else if(sum>target){
        //         end--;
        //     }
        //     else{
        //         return {st,end};
        //     }
        // }
        // return {};
        //tc o(n)
        //sc o(1)
    



    //brute force use two pointer 
    //to use two pointer we have to sort array
    // sort(nums.begin(),nums.end());
    // int first=0;
    // int n=nums.size();
    // int last=n-1;
    // int sum=0;
    // vector<pair<int,int>>ans;
    // while(first<=last){
    //     sum=nums[first]+nums[last];
    //     if(sum>target){
    //         last--;
    //     }
    //     else if(sum<target){
    //         first++;
    //     }
    //     else{
    //         ans.push_back({first,last});
    //          // Skip duplicates
    //         while (first < last && nums[first] == nums[first + 1]) first++;
    //         while (first < last && nums[last] == nums[last - 1]) last--;
            
    //         // Move both pointers
    //         first++;
    //         last--;
    //     }
    // }
    //     return ans;
    // }


  
   


   //brute force
// int sum=0;

//    for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         sum=nums[i]+nums[j];
//         if(sum==target){
//             return {i,j};

//         }

//     }
//    }

//     return {};
//     }


    //tc (n^2)
    //sc o(n)




        // //optimised approach -- hash map
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     int complement=target-nums[i];
        //     if(mp.find(complement)!=mp.end()){
        //         return {mp[complement],i};
        //     }
        //     mp[nums[i]]=i;
        // }
        // return {};


//}

//    vector<vector<int>> sum(vector<int>& nums, int target) {
      //the problem is we nned to create a copy to have original indx 
//     vector<pair<int, int>> copy;
    
//     // Create a copy of the array with values and their original indices
//     for (int i = 0; i < nums.size(); i++) {
//         copy.push_back({nums[i], i});
//     }

//     // Sort the array by values (not indices)
//     sort(copy.begin(), copy.end());
    
//     int first = 0;
//     int last = copy.size() - 1;
//     vector<vector<int>> ans;

//     // Two-pointer approach to find pairs that sum to the target
//     while (first < last) {
//         int sum = copy[first].first + copy[last].first;
        
//         if (sum > target) {
//             last--;
//         } else if (sum < target) {
//             first++;
//         } else {
//             // Found a valid pair, add indices to the result
//             ans.push_back({copy[first].second, copy[last].second});
            
//             // Skip duplicates for both pointers
//             while (first < last && copy[first].first == copy[first + 1].first) {
//                 first++;
//             }
//             while (first < last && copy[last].first == copy[last - 1].first) {
//                 last--;
//             }
            
//             // Move both pointers after processing the pair
//             first++;
//             last--;
//         }
//     }

//     return ans;
// }

// //tc o(nlogn)
// //sc o(n)

};