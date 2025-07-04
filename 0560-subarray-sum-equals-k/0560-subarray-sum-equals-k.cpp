class Solution {
public:
  int subarraySum(vector<int>& nums, int k) {


    //brute force 
    //tc o(n^2)
    //sc o(1)
    // int n=nums.size();
  
    // int cnt=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //   for(int j=i;j<n;j++){
    //     sum+=nums[i];
    //     if(sum==k){
    //       cnt++;
    //     }
    //   }

    //   }
    //   return cnt;

    // }


    //optmised 
    //tc o(n^2)
    //sc o(n)
    unordered_map<int,int>mp;
    int cnt=0;
    int sum=0;
    mp[0]=1;
    int n=nums.size();
    for(int i=0;i<n;i++){
      sum+=nums[i];

      //if sum-k seems before
      if(mp.find(sum-k)!=mp.end()){
        cnt+=mp[sum-k];
      }
      mp[sum]++;

    }
    return cnt;
    }


    // unordered_map<int, int> prefixCount;
    // int count = 0;
    // int sum = 0;
    
    // prefixCount[0] = 1;  // To handle case when subarray itself starts from index 0

    // for (int i = 0; i < nums.size(); i++) {
    //     sum += nums[i];

    //     // If sum - k exists, add the number of times it occurred
    //     if (prefixCount.find(sum - k) != prefixCount.end()) {
    //         count += prefixCount[sum - k];
    //     }

    //     // Store/update current prefix sum
    //     prefixCount[sum]++;
    // }

    // return count;
  


};