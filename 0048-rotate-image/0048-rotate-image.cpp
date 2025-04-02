class Solution {
public:

 //  void rotate(vector<vector<int>>& matrix) {
        //brute
        //rc o(n^2)
        //sc o(n^2)  
        // int n=matrix.size();
        // vector<vector<int>>temp(n,vector<int>(n,0));  
        // solve(matrix,temp);


        // //copy elemnts to original array

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=temp[i][j];
        //     }
        // }


        //optimal
        //trnspose
    //     int n=matrix.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<i;j++){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }

    //     //reverse row
    //     for(int i=0;i<n;i++){
    //         reverse(matrix[i].begin(),matrix[i].end());
    //     }
    // }

    //tc o(n*n)
    //sc o(1)


    
    // void solve(vector<vector<int>>&matrix,vector<vector<int>>&temp){
    //     int n=matrix.size();


    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             temp[j][n-i-1]=matrix[i][j];

    //         }
    //     }
    
    // }


    //brute force 
    void rotate(vector<vector<int>>& matrix) {
      int rows=matrix.size();
      int cols=matrix[0].size();
      vector<vector<int>>grid(rows,vector<int>(cols,-1));

      f(matrix,rows,cols,grid);

      //copy to original matrix
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          matrix[i][j]=grid[i][j];
        }
      }
        
    }


    void f(vector<vector<int>>&matrix,int rows,int cols,vector<vector<int>>&grid){

      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          grid[j][cols-i-1]=matrix[i][j];
        }
      }
    }
};