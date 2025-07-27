class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>res;


            for(int i=0;i<numRows;i++){
                vector<int>temp(i+1,1);

                if(i>1){
                    //write logic
                    for(int k=1;k<i;k++){
                       temp[k]=res[i-1][k-1]+res[i-1][k];
                    }

                }


                res.push_back(temp);
            }

        return res;
    }
};