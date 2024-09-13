class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    //     int ans=0;
    //     int minlength=INT_MAX;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i;j<nums.size();j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=nums[k];

    //             if(sum>=target){

    //                 ans=j-i+1;
    //                 if(ans<minlength){
    //                     minlength=ans;
    //                 }
                    
                    
    //             }
    //         }
    //     }
    // }

    // if(ans<minlength){
    //     return 0;
    // }
    // else{
    // return minlength;
    // }




    //better
         int left = 0, right = 0, sumOfCurrentWindow = 0;
        int res = INT_MAX;

        for(right = 0; right < nums.size(); right++) {
            sumOfCurrentWindow += nums[right];

            while (sumOfCurrentWindow >= target) {
                res = min(res, right - left + 1);
                sumOfCurrentWindow -= nums[left];
                left++;
            }
        }

        return res == INT_MAX ? 0 : res;
    }
};