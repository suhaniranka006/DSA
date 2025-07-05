class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
          if(prices[i]<mini){
            mini=prices[i];
          }
          int profit=prices[i]-mini;

          maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};