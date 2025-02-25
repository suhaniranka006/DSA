class Solution {
public:
    int trap(vector<int>& height) {
        
      //   int n=height.size();
      //   int water=0;

      // for(int i=0;i<n;i++){
      //   int left_max=0;
      //   int right_max=0;

      //   //leftmax
      //   for(int j=0;j<=i;j++){
      //     left_max=max(left_max,height[j]);
      //   }

      //   //rightmax
      //   for(int j=i;j<n;j++){
      //     right_max=max(right_max,height[j]);
      //   }

      //   water+=min(left_max,right_max)-height[i];
      // }
      // return water;


            

            //tc O(n^2)
            //sc o(1)

            //better

            stack<int>st;
            int n=height.size();
            int water=0;
            for(int i=0;i<n;i++){

              while(!st.empty() && height[i]>height[st.top()]){
                int top=st.top();
                st.pop();
                if(st.empty()){
                  break;
                }
                int dist=i-st.top()-1;
                int bounded_height=min(height[i],height[st.top()])-height[top];
                water+=dist*bounded_height;
              }
              st.push(i);
            }
            return water;

    }
};