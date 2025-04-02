class Solution {
public:

      //brute approach
    // void setZeroes(vector<vector<int>>& matrix) {
    //       int rows=matrix.size();
    //       int cols=matrix[0].size();

    //   vector<vector<int>>grid(rows,vector<int>(cols,-1));
    //   f(matrix,grid);     
    // }

    // void f(vector<vector<int>>&matrix,vector<vector<int>>&grid){
    //   int rows=matrix.size();
    //   int cols=matrix[0].size();


    //        for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //     grid[i][j]=matrix[i][j];
    //     }
    //   }
    //   for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //       if(matrix[i][j]==0){
    //         for(int k=0;k<grid[0].size();k++){
    //           grid[i][k]=0;
    //         }
    //         for(int l=0;l<grid.size();l++){
    //           grid[l][j]=0;
    //         }
    //       }
    //       // else {

    //       //   if(matrix[i][j]==1 && grid[i][j]!=0){
    //       //   grid[i][j]=1;
    //       //   }
           
    //       // }
    //     }
    //   }

    //   for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //       matrix[i][j]=grid[i][j];
    //     }
    //   }
    //   // otc  (m*n(m+n))
    //   //sc o(m*n)

    // }


      //better approach
      //2 pass solution
      //tc o(m*n)
      //sc o(m+n)
    //  void setZeroes(vector<vector<int>>& matrix) {
    //       int rows=matrix.size();
    //       int cols=matrix[0].size();
    //       unordered_set<int>st1;  // row with 0
    //       unordered_set<int>st2;  //col with 0

    //         //first pass
    //       for(int i=0;i<rows;i++){
    //         for(int j=0;j<cols;j++){
    //           if(matrix[i][j]==0){
    //             st1.insert(i);
    //             st2.insert(j);
    //           }
    //         }
    //       }

    //       //2nd pass
    //       for(int i=0;i<rows;i++){
    //         for(int j=0;j<cols;j++){
    //           if(st1.count(i) || st2.count(j)){
    //             matrix[i][j]=0;
    //           }
    //         }
    //       }

        
    //       }



      //optimised approach
      //tc o(m*n)
      //sc o(m+n)
      void setZeroes(vector<vector<int>>& matrix) {
        //2 pass solution

        int rows=matrix.size();
        int cols=matrix[0].size();
        

        //use frist row or column as markers

          bool firstrow=false;
          bool firstcol=false;
        for(int i=0;i<rows;i++){
          if(matrix[i][0]==0){
            firstrow=true;
            break;

          }
        }
        for(int j=0;j<cols;j++){
          if(matrix[0][j]==0){
            firstcol=true;
            break;
          }
        }


        //mark 0s for first row and col
        for(int i=1;i<rows;i++){
          for(int j=1;j<cols;j++){
            if(matrix[i][j]==0){
              matrix[i][0]=0;
              matrix[0][j]=0;
            }
          }
        }

        //mark zeroes for remaining
        for(int i=1;i<rows;i++){
          for(int j=1;j<cols;j++){
          
            if(matrix[i][0]==0 || matrix[0][j]==0){
              matrix[i][j]=0;
            }
          }
        }


          //mark first row , col if needed
          if(firstrow){
            for(int i=0;i<rows;i++){
              matrix[i][0]=0;
            }
          }

          if(firstcol){
            for(int i=0;i<cols;i++){
              matrix[0][i]=0;
            }
          }
       
      

      }
     
};