class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        //brute 
        //optimise by greedy
        int fiveCount=0;
        int tenCount=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                fiveCount++;
            }
            else if(bills[i]==10){
                tenCount++;
                if(fiveCount==0) return false;
                fiveCount--;
            }
            else{
                if(tenCount>0 && fiveCount>0){
                    fiveCount--;
                    tenCount--;
                }
                else if(fiveCount>=3){
                    fiveCount-=3; // to relaease 15
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};