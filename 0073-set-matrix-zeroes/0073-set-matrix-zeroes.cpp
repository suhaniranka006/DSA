class Solution {
public:

//tc o(n*m)
//sc o(n*m)
    // void setZeroes(vector<vector<int>>& matrix) {
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     vector<vector<int>>vis(n,vector<int>(m,1));

    //     f(matrix,vis,n,m);

      
    // }

    // void f(vector<vector<int>>&matrix,vector<vector<int>>&vis,int n,int m){


    //   for(int i=n-1;i>=0;i--){
    //     for(int j=m-1;j>=0;j--){
    //       if(matrix[i][j]==0){
    //         vis[i][j]=0;
    //       }
    //     }
    //   }

    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //       if(vis[i][j]==0){
    //         for(int r=0;r<n;r++){
    //           matrix[r][j]=0;
    //         }

    //         for(int c=0;c<m;c++){
    //           matrix[i][c]=0;
    //         }
    //       }
    //     }
    //   }


    // }


       void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
      

        //mark first row and col as markers
        //check if first row and col contain zeroes
        
        bool firstrow=false;
        bool firstcol=false;

          for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
              firstcol=true;
              break;
            }
          }



            for(int j=0;j<m;j++){
              if(matrix[0][j]==0){
                firstrow=true;
                break;
              }
            }

            for(int i=1;i<n;i++){
            
                for(int j=1;j<m;j++){
                
                    if(matrix[i][j]==0){
                      matrix[i][0]=0;
                      matrix[0][j]=0;
                    }
                }
              }
          


             for (int i = 1; i < n; i++) {
               if (matrix[i][0] == 0) {
                for (int j = 1; j < m; j++) {
                matrix[i][j] = 0;
                   }
               }
              }
    


          for(int j=1;j<m;j++){
            if(matrix[0][j]==0){
              for(int i=1;i<n;i++){
                matrix[i][j]=0;
              }
            }
          }

          if(firstrow){
            for(int j=0;j<m;j++){
              matrix[0][j]=0;
            }
          }

          if(firstcol){
            for(int i=0;i<n;i++){
              matrix[i][0]=0;
            }
          }
 }
        




       
};