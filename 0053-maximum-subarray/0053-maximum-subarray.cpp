class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      //brute force 
      // int n=nums.size();
      // int ans=INT_MIN;

      // for(int i=0;i<n;i++){
      //   for(int j=0;j<n;j++){
      //     int sum=0;
      //       for(int k=i;k<=j;k++){
      //          sum+=nums[k];
      //       }
      //       if(sum>ans){
      //         ans=sum;
      //       }
      //   }
      // }
      // return ans;
      //not for -ve numbers
      //tco (n^2)


      //better 
      //kadane algo 
      int n=nums.size();
      int first=INT_MIN;
      int sec=0;

      for(int i=0;i<n;i++){
        sec+=nums[i];
        if(sec>first){
          first=sec;
        }
        if(sec<0){
          sec=0;
        }
      }
      return first;


        
    }
};