class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int cnt=0;

        for(int x=0;x<nums.size()-1;x++){
            for(int y=x+1;y<nums.size();y++){
                if((nums[x]==nums[y])   &&  x<y){
                    cnt++;

                }
            }
        }

        return cnt;
        
    }
};