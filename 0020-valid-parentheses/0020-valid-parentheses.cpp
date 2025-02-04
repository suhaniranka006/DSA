class Solution {
public:
    bool isValid(string s) {

        //brute force
        //not for all tescases
        //tc o(n)
        //o(1)
    //     int l=s.length()-1;
    //   int st=0;
    //   int end=l;

    //   while(st<end){
    //     if(s[st]=='{' && s[end]=='}'){
    //         st++;
    //         end--;
    //     }
    //     else if(s[st]=='[' && s[end]==']'){
    //         st++;
    //         end--;
    //     }
    //     else if(s[st]=='(' && s[end]==')'){
    //         st++;
    //         end--;
    //     }
    //     else{
    //         break;
    //     }
    //   }

    //   if(st>=end){
    //     return true;
    //   }
    //   else{
    //     return false;
    //   }


    //optimised using stack

    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            st.push(s[i]); // Push opening brackets
        } 
        else {
            if (st.empty()) return false; // Ensure stack is not empty before accessing top()

            char top = st.top();
            if ((s[i] == '}' && top == '{') ||
                (s[i] == ']' && top == '[') ||
                (s[i] == ')' && top == '(')) {
                st.pop();
            } 
            else {
                return false; // Invalid case: closing bracket doesn't match top
            }
        }
    }

    return st.empty(); // If stack is empty, parentheses are balanced
    }
    
};