class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
    // int max_so_far = INT_MIN;
    // int max_ending_here = 0;

    // for (int i = 0; i < nums.size(); i++) {
    //     max_ending_here += nums[i];
    //     if (max_so_far < max_ending_here) {
    //         max_so_far = max_ending_here;
    //     }
    //     if (max_ending_here < 0) {
    //         max_ending_here = 0;
    //     }
    // }
    // return max_so_far;


        //brute force
        // int ans=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         int sum=0;
        //         for(int k =i;k<=j;k++){
        //             sum+=nums[k];

        //             if(sum>ans){
        //                 ans=sum;
        //             }
        //         }
        //     }
        // }
        // return ans;


        //optimised

        //kadane algo 
        int one=INT_MIN;
        int sec=0;
        for(int i=0;i<nums.size();i++){
            sec+=nums[i];
            if(one<sec){
                one=sec;
            }
            if(sec<0){
                sec=0;
            }
        }
        return one;
    }
};