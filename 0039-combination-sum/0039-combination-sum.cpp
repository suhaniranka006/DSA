class Solution {
public:


    void solve(int ind,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds){

        //base case

        if(target==0){
            ans.push_back(ds);
            return ;
        }

        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]<=target){
                ds.push_back(candidates[i]);
                
            
            solve(i,target-candidates[i],candidates,ans,ds);
            ds.pop_back();
            }
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;

         solve(0,target,candidates,ans,ds);
         return ans;
    }



//     void solve(int ind, int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& ds) {
//     // Base case: If the target is reached, store the current combination
//     if (target == 0) {
//         ans.push_back(ds);
//         return;
//     }

//     // Recursive case: Explore each candidate starting from 'ind'
//     for (int i = ind; i < candidates.size(); i++) {
//         if (candidates[i] <= target) {
//             // Choose the current candidate
//             ds.push_back(candidates[i]);

//             // Recurse with the same candidate since it can be used again
//             solve(i, target - candidates[i], candidates, ans, ds);

//             // Backtrack: remove the last added candidate
//             ds.pop_back();
//         }
//     }
// }

// vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     solve(0, target, candidates, ans, ds);
//     return ans;
// }
};