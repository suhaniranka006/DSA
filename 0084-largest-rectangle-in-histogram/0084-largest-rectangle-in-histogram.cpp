class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        //take u forward
        //brute force
        //n^2


        // int max_area=0;
        // int n=heights.size();

        // for(int i=0;i<n;i++){

        // int curr_height=heights[i];
        // int left=i;
        // int right=i;

        // //pse

        // while(left>=0 && heights[left]>=curr_height){
        //     left--;
        // }
        // //nge

        // while(right<n && heights[right]>=curr_height){
        //     right++;
        // }

        // int width=right-left-1;

        // int area=width*curr_height;
        // max_area=max(area,max_area);
        // }


        //     return max_area;


            
        //better 0(N)

        //best

        int n=heights.size();
        int max_area=0;

        stack<int>st;

        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[i]<heights[st.top()])){
                int height=heights[st.top()];

                st.pop();
                int width=st.empty() ? i:(i-st.top()-1);

                int area=height*width;
                max_area=max(max_area,area);

            }
            st.push(i);
        }

        return max_area;
    }
};