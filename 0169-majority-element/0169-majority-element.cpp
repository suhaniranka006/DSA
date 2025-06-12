class Solution {
public:
    int majorityElement(vector<int>& nums) {

      int n=nums.size();
        
        unordered_map<int,int>cnt;

        for(int i=0;i<n;i++){
          cnt[nums[i]]++;
        }

        for(auto &pair:cnt){
          if(pair.second>n/2){
            return pair.first;
          }
        }
        return -1;
    }
};