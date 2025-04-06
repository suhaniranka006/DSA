class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
      int n=nums.size();
      vector<int>temp;
      vector<bool>vis(n,0);
      f(0,nums,ans,temp,vis);
      return ans;    
    }

    void f(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>vis){
      if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
      }

      for(int i=0;i<nums.size();i++){
        if(!vis[i]){
          temp.push_back(nums[i]);
        
        vis[i]=true;
        f(index+1,nums,ans,temp,vis);
        vis[i]=false;
        temp.pop_back();
        }
      }




    }

};


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
//public:
    // vector<vector<int>>v2;
    // void per(vector<int>v,int l,int h){
    //     if(l==h){
    //         v2.push_back(v);
    //     }
    //     else{
    //         for(int i=l;i<h;i++){
    //             swap(v[l],v[i]);
    //             per(v,l+1,h);
    //             swap(v[l],v[i]);
    //         }
    //     }
    // }


    // void solve(vector<int>&nums,vector<int>&ds,int freq[],vector<vector<int>>&ans){
    //     //base case
    //     if(ds.size()==nums.size()){
    //         ans.push_back(ds);
    //         return;
    //     }

    //     //iterate
    //     for(int i=0;i<nums.size();i++){
    //         if(!freq[i]){  // check if item is already in ds
    //             ds.push_back(nums[i]);
    //             freq[i]=1;
    //             solve(nums,ds,freq,ans);
    //             freq[i]=0;
    //             ds.pop_back();

    //         }
    //     }

    // }
    // vector<vector<int>> permute(vector<int>& nums) {
    //     // per(nums,0,nums.size());
    //     // return v2;


    //     //brute extra space
    //     vector<vector<int>>ans;
    //     vector<int>ds;
    //     int n=nums.size();
    //     int freq[n];

    //     for(int i=0;i<nums.size();i++){
    //         freq[i]=0;
    //     }
    //         solve(nums,ds,freq,ans);
    //         return ans;
    //tc o(n!*n)
    //sc o(n)+o(n) 
    //approach 2 next time
     
        
    //}