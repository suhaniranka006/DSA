class Solution {
public:
  int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    int count = 0;
    int sum = 0;
    
    prefixCount[0] = 1;  // To handle case when subarray itself starts from index 0

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // If sum - k exists, add the number of times it occurred
        if (prefixCount.find(sum - k) != prefixCount.end()) {
            count += prefixCount[sum - k];
        }

        // Store/update current prefix sum
        prefixCount[sum]++;
    }

    return count;
}

};