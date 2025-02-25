class Solution {
public:

  int histogram(vector<int>&heights){
    int n=heights.size();
    stack<int>st;
  int max_area=0;

  for(int i=0;i<=n;i++){
      int h = (i == n) ? 0 : heights[i];
    while(!st.empty()  && h < heights[st.top()]){
      int height=heights[st.top()];
      st.pop();
      int width=st.empty() ? i: (i-st.top()-1);
      int area=height*width;
      max_area=max(max_area,area);
    }
    st.push(i);
  
  }
  return max_area;
  }

    int maximalRectangle(vector<vector<char>>& matrix) {
        // int rows=matrix.size();
        // if(rows==0){
        //   return 0;
        // }
        // int cols=matrix[0].size();
        // int max_area=0;
        // for(int i=0;i<rows;i++){
        //   for(int j=0;j<cols;j++){

        //     if(matrix[i][j]=='1'){
        //     int min_width=INT_MAX;
        //     for(int k=i;k<rows;k++){
        //       if(matrix[k][j]=='0'){
        //         break;
        //       }
        //       int width=0;

        //       while(j+width<cols && matrix[k][j+width]=='1'){
        //         width++;
        //       }
        //       min_width=min(min_width,width);
        //       int area=(k-i+1 )*min_width;
        //       max_area=max(max_area,area);
        //     }


        //   }
        // }
        // }
        // return max_area;

        //tc o(rows,cols)^2
        //sc o(1)


        int rows=matrix.size();
        if(rows==0){
          return 0;
        }
          int cols=matrix[0].size();
          int max_area=0;
          vector<int>heights(cols,0);
        

          for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
              if(matrix[i][j]=='1'){
                heights[j]++;
              }
              else{
                heights[j]=0;
              }
            }
            int area=histogram(heights);
            max_area=max(max_area,area);
          }
        
          return max_area;
        }
    

};