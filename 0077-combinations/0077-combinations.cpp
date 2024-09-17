class Solution {
public:

    void subsets(int start,int k,vector<vector<int>>&ans,vector<int>&current,int n){
        if(current.size()==k){
            ans.push_back(current);
            return;
        }

        for(int i=start;i<=n;i++){
            current.push_back(i);
            subsets(i+1,k,ans,current,n);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>current;
        subsets(1,k,ans,current,n);
        return ans;
    }
};