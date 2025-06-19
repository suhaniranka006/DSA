class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        

        //skip element at same level at same recursion 
        //it avoids processing duplicate elemetns


        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();

        sort(nums.begin(),nums.end());
        f(nums,ans,temp,0,n);

        return ans;
    }

    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int idx,int n){

      ans.push_back(temp);


      for(int i=idx;i<n;i++){

        if(i>idx && nums[i]==nums[i-1]){
          continue;
        }

        //backtrack
        temp.push_back(nums[i]);
        f(nums,ans,temp,i+1,n);
        temp.pop_back();
      }
    }
};