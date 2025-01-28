class Solution {
public:

// int fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//         return fact;
//     }
// }

    vector<vector<int>> generate(int numRows) {
        //pascal triangle means each number is sum of two nos directly abovwe it
        // vector<vector<int>>ans;

        // //iterate over rows
        // for(int i=0;i<numRows;i++){
        //     //sum of prev row -- next row
        //     vector<int>v(i+1,1); // size = i+1 and intialise all block to 1 only

        //     //iterate to all columns of row
        //     for(int j=1;j<i;j++){ // as j=0 and j=i will be 1 already
        // //sum of above 2 boxes
        // //curr row i and prev row i-1

        // v[j]=ans[i-1][j] +ans[i-1][j-1];
        //     }
        //     ans.push_back(v);
        // }

       // return ans;



       vector<vector<int>>ans;
       for(int i=0;i<numRows;i++){
        vector<int>v(i+1,1);
        for(int j=1;j<i;j++){
            v[j]=ans[i-1][j]+ans[i-1][j-1];
        }
            ans.push_back(v);
        
       }
       return ans;
   
    }
    //tc:o(n^2)
    //sc:o(n^2)as we are using 2 vector one for whole triangle and othe fro each row
};