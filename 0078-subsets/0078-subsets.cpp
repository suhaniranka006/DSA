class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // int n=nums.size();
        // vector<vector<int>>ans;
        // int subset=1<<n; //as 2^n subset

        // for(int i=0;i<subset;i++){
        //   vector<int>temp;
        //   for(int j=0;j<n;j++){
        //     if(i & (1<<j))
        //     {
        //     temp.push_back(nums[j]);
        //     }
        //   }
        //   ans.push_back(temp);
        // }
        // return ans;


        //recursive approach
        vector<vector<int>>ans;
        vector<int>temp;
        f(0,nums,ans,temp);
        return ans;
    }
    //tc o(2^n)
    //sc o(2^(n*n))

    void f(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp){
      //base case
      if(index>=nums.size()){
        ans.push_back(temp);
        return;
      }

      //exclude
      f(index+1,nums,ans,temp);
      //include
      int ele=nums[index];
      temp.push_back(ele);

        f(index+1,nums,ans,temp);
        temp.pop_back();
    }
};

