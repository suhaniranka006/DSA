class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //brute
        //rc o(n^2)
        //sc o(n^2)  
        int n=matrix.size();
        vector<vector<int>>temp(n,vector<int>(n,0));  
        solve(matrix,temp);


        //copy elemnts to original array

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[i][j];
            }
        }
    }

    void solve(vector<vector<int>>&matrix,vector<vector<int>>&temp){
        int n=matrix.size();


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[j][n-i-1]=matrix[i][j];

            }
        }
    
    }
};