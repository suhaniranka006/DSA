
class Solution {
public:
void solve(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&ans,vector<bool>&visited){
    if(current.size()==nums.size()){
        ans.push_back(current);
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(!visited[i]){
        current.push_back(nums[i]);
        visited[i]=true;
        solve(index+1,nums,current,ans,visited);
        visited[i]=false;
        current.pop_back();

        }
    }

    //tc o(n!) permutations and o(n) for loop

    //sc o(n)+o(n) for current and map
     
       
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>current;
        vector<vector<int>>ans;
        vector<bool>visited(nums.size(),false);
        solve(0,nums,current,ans,visited);
        return ans;
    }
};