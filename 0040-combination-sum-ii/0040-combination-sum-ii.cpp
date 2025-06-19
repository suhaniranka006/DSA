class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());

        f(0,target,candidates,ans,temp,n);
        return ans;
    }

    void f(int idx,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&temp,int n){
      //base case
      if(target==0){
        ans.push_back(temp);
        return;
      }


      for(int i=idx;i<n;i++){

        //avoid duplicates
        if(i>idx && candidates[i]==candidates[i-1]) continue;


          //early pruning
        if(candidates[i]>target){
          break;
        }

        temp.push_back(candidates[i]);
        f(i+1,target-candidates[i],candidates,ans,temp,n);
        temp.pop_back();

      }
    }
};