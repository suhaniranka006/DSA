class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int m = intervals[0].size(); // column size

        vector<vector<int>>ans;

        //step -1 sort
        sort(intervals.begin(),intervals.end());



        for(auto interval:intervals){


          if(ans.empty() || ans.back()[1]<interval[0]){
            ans.push_back(interval);
          }
          else {

          }
          
          ans.back()[1] = max(ans.back()[1],interval[1]);
        }

        return ans;


    }
};