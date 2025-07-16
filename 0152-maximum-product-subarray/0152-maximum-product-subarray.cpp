class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int n=nums.size();

        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int multi=1;
        //     for(int j=i;j<n;j++){
        //         multi*=nums[j];

        //         maxi=max(maxi,multi);
        //     }

        // }
        // return maxi;


        //better

            //kadane ago -- track max and min both to handle -ve numbers
        int n=nums.size();

        int result=nums[0];
        int maxi=nums[0];
        int mini=nums[0];

        for(int i=1;i<n;i++){

            if(nums[i]<0){
                swap(maxi,mini);
            }

            maxi=max(nums[i],nums[i]*maxi);
            mini=min(nums[i],nums[i]*mini);

            result=max(result,maxi);
        }

return result;


    }
};