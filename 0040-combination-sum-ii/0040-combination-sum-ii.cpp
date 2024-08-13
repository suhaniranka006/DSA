class Solution {
public:
    // vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    //     int size=candidates.size();
    //     vector<vector<int>>ans;
       
    //    int sum=0;
    //    sort(candidates.begin(),candidates.end());

    //    for(int i=0;i<size;i++){
    //     if(i>0 && candidates[i]==candidates[i-1]) continue; //skip duplicate
    //     for(int j=i+1;j<size;j++){
    //         if(j>i+1 && candidates[j]==candidates[j-1]) continue;
    //         for(int k=j+1;k<size;k++){
    //             if(k>j+1 && candidates[k]==candidates[k-1]) continue;

    //             sum=candidates[i]+candidates[j]+candidates[k];
    //             if(sum==target){
    //                 ans.push_back({candidates[i],candidates[j],candidates[k]});
    //             }
    //         }
    //     }
    //    }
    //    return ans;
    // }


void backtrack(const vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(current);
        return;
    }

    for (int i = start; i < candidates.size(); ++i) {
        if (i > start && candidates[i] == candidates[i - 1]) continue; // Skip duplicates

        if (candidates[i] > target) break; // No need to continue if the number is greater than the target

        current.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], i + 1, current, ans);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> current;

    sort(candidates.begin(), candidates.end()); // Sort to handle duplicates easily
    backtrack(candidates, target, 0, current, ans);

    return ans;
}

};