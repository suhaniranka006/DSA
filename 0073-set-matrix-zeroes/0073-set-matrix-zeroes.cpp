class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

        bool f1=false;
        bool f2=false;

        int m=matrix[0].size();  
        int n=matrix.size();


        //handle 0th row

        for(int j=0;j<m;j++){
            if(matrix[0][j]==0){
                f1=true;
                break;
            }
        }

        //handle 0th column

        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                f2=true;
                break;
            }
        }

        //handle entire rows and cols

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }


            
            // for(int i=0;i<n;i++){
            //     if(matrix[i][0]==0){
            //         for(int j=1;j<m;j++){
            //             matrix[i][j]=0;
            //         }
            //     }
            // }


            // for(int j=0;j<m;j++){
            //     if(matrix[0][j]==0){
            //         for(int i=1;i<n;i++){
            //             matrix[i][j]=0;
            //         }
            //     }
            // }


            //check marks first the n modify

            for(int i=1;i<n;i++){
                for(int j=1;j<m;j++){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }



            if(f1){
                for(int j=0;j<m;j++){
                    
                   matrix[0][j]=0;
                }
            }
                   if(f2){
                for(int i=0;i<n;i++){
                 matrix[i][0]=0;
                }
            }


           


        

        




    }
};