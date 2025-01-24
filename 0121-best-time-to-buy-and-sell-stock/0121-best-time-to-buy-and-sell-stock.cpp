class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //      if (prices.empty())
    //       return 0;

    // int minPrice = INT_MAX;
    // int maxProfit = 0;

    // for (int price : prices) {
    //     // Upadte the minimum priec encountered so far
    //     if (price < minPrice) {
    //         minPrice = price;
    //     }
    //     // Calculate the profit if we sell at the current price
    //     else if (price - minPrice > maxProfit) {
    //         maxProfit = price - minPrice;
    //     }
    // }

    // return maxProfit;


    int minprice=INT_MAX;
    int maxprofit=0;
    for(int price:prices){
      if(price<minprice){
        minprice=price;
      }
      else if(price-minprice>maxprofit){
        maxprofit=price-minprice;
      }
    }
    return maxprofit;
    }
};