class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int>st;

      st.push(-1);
      int len=0;
      int curr=0;

      for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);

            }
            else{
                int temp=st.top();
                curr=max(curr,i-temp);
            }
        }
      }
      return curr;

    }
};