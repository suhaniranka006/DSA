class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
          mp[nums[i]]++;

        }

        for(auto &pair:mp){
          if(pair.second>n/3){
            ans.push_back(pair.first);
          }
    
        }
        return ans;
    }
};