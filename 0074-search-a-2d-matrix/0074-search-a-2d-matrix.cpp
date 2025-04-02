class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix.size();j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        //not for all tescases


        //binary search
    //     int row=matrix.size();
    //     int col=matrix[0].size();
    //     int start=0;
    //     int end=row*col-1;

    //     while(start<=end){
    //     int mid=start+(end-start)/2;
    //         int ele=matrix[mid/col][mid%col];
    //         if(target==ele){
    //             return true;
    //         }
    //         else if(target>ele){
    //             start=mid+1;
    //         }
    //         else{
    //             end=mid-1;
    //         }
        
    //     }
    //     return false;

    // }
    //tc o(lognm)
    //sc o(1)



      //brute force
       //linear search
       //tc o(m*n)
       //sc o(1)


          //better 
          //bianry search

          int rows=matrix.size();
          int cols=matrix[0].size();
          int st=0;
          int end=rows*cols-1;

          while(st<=end){
            int mid=st+(end-st)/2;
            int ele=matrix[mid/cols][mid%cols];

            if(target==ele){
              return true;
            }
            else if(target>ele){
              st=mid+1;
            }
            else{
              end=mid-1;
            }
          }
          return false;
}
//tc o(log(mn))
//sc o(1)
};