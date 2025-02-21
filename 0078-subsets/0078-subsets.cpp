class Solution {
public:


        void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&output,int index){
                if(index>=nums.size()){
                    ans.push_back(output);
                    return;
                }

                //exclude
                solve(nums,ans,output,index+1);

                //include
                int element=nums[index];
                output.push_back(element);
                solve(nums,ans,output,index+1);
                output.pop_back();
        }


    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>>ans;
        // vector<int>output;
        // int index=0;
        // solve(nums,ans,output,index);
        // return ans;

        vector<vector<int>>ans;
       
            int n=nums.size();
        int subset=1<<n;

        for(int i=0;i<subset;i++){
             vector<int>temp;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }

    //tc o(2^n)
    //sc o(2^n *n)
};



// class Solution {
//     private:
//     void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>& ans){
//         //base case
//         if(index>=nums.size()){
//             ans.push_back(output);
//             return;
//         }

//         //exclude
//         solve(nums,output,index+1,ans);

//         //include
//         int element=nums[index];
//         output.push_back(element);
//         solve(nums,output,index+1,ans);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>output;
//         int index=0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };