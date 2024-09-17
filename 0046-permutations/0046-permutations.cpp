class Solution {



//     void solve(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&ans,vector<bool>&visited){
//     if(current.size()==nums.size()){
//         ans.push_back(current);
//         return;
//     }

//     for(int i=0;i<nums.size();i++){
//         if(!visited[i]){
//         current.push_back(nums[i]);
//         visited[i]=true;
//         solve(index+1,nums,current,ans,visited);
//         visited[i]=false;
//         current.pop_back();

//         }
//     }

//     //tc o(n!) permutations and o(n) for loop

//     //sc o(n)+o(n) for current and map
     
       
// }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int>current;
//         vector<vector<int>>ans;
//         vector<bool>visited(nums.size(),false);
//         solve(0,nums,current,ans,visited);
//         return ans;
//     }

//better approach
public:
    vector<vector<int>>v2;
    void per(vector<int>v,int l,int h){
        if(l==h){
            v2.push_back(v);
        }
        else{
            for(int i=l;i<h;i++){
                swap(v[l],v[i]);
                per(v,l+1,h);
                swap(v[l],v[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        per(nums,0,nums.size());
        return v2;
    }
};