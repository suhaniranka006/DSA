class Solution {
public:



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();

        f(candidates,target,ans,temp,0);
        return ans;
    }

    void f(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&temp,int idx){
      //base case
      if(target==0){
        ans.push_back(temp);
        return;
      }
      if(target<0 || idx==candidates.size()){
        return;
      }


      temp.push_back(candidates[idx]);
      f(candidates,target-candidates[idx],ans,temp,idx);
      temp.pop_back();

      f(candidates,target,ans,temp,idx+1);
    }

};