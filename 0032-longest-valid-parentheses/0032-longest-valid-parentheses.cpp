class Solution {
public:
    int longestValidParentheses(string s) {
    //   stack<int>st;

    //   st.push(-1);
      
    //   int curr=0;

    //   for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     if(ch=='('){
    //         st.push(i);
    //     }
    //     else{
    //         st.pop();
    //         if(st.empty()){
    //             st.push(i);

    //         }
    //         else{
    //             int temp=st.top();
    //             curr=max(curr,i-temp);
    //         }
    //     }
    //   }
    //   return curr;
    //tc o(n)
    //sc o(n)


    //better 
    //two pass

    
    int len=0;
    int left=0;
    int right=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='('){
            left++;
        }
        else{
            right++;
        }
        if(left==right){
            len=max(len,2*left);
        }
        else if(right>left){  //unbalanced
        left=right=0;

        } 
    }

    left=right=0;

    for(int i=s.length()-1;i>=0;i--){
        char ch=s[i];
        if(ch==')'){
            right++;
        }
        else{
        left++;
        }
        if(left==right){
            len=max(len,2*left);
        }
        else if(left>right){
            left=right=0;
        }
    }
    return len;
    }
};