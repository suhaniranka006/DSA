class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int multi=1;
            for(int j=i;j<n;j++){
                multi*=nums[j];

                maxi=max(maxi,multi);
            }

        }
        return maxi;
    }
};