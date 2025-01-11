class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[(i-1)%n]>nums[i]){
                cnt++;
            }
        }

            if(nums[nums.size()-1]>nums[0]){
                cnt++;
            }
        
        return cnt<=1;
        
    }
};