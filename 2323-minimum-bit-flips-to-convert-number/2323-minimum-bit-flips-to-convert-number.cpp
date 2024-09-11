class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult=start^goal;
        int cnt=0;
        while(xorResult>0){
            cnt+=xorResult &1 ;
            xorResult>>=1;
        }
        return cnt;
        
    }
};