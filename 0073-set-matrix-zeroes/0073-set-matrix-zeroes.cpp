class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
          int rows=matrix.size();
          int cols=matrix[0].size();

      vector<vector<int>>grid(rows,vector<int>(cols,-1));
      f(matrix,grid);
      

         
    }

    void f(vector<vector<int>>&matrix,vector<vector<int>>&grid){
      int rows=matrix.size();
      int cols=matrix[0].size();


           for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
        grid[i][j]=matrix[i][j];
        }
      }
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          if(matrix[i][j]==0){
            for(int k=0;k<grid[0].size();k++){
              grid[i][k]=0;
            }
            for(int l=0;l<grid.size();l++){
              grid[l][j]=0;
            }
          }
          // else {

          //   if(matrix[i][j]==1 && grid[i][j]!=0){
          //   grid[i][j]=1;
          //   }
           
          // }
        }
      }

      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          matrix[i][j]=grid[i][j];
        }
      }
    
    }
};