class Solution {
public:

        // vector<string>result;


    //     bool isValid(string curr){
    //         int cnt=0;

    //         for(char ch:curr){
    //             if(ch== '('){
    //                 cnt++;
    //             }
    //             else{
    //                 cnt--;
    //             }

    //             if(cnt<0){
    //                 return false;
    //             }
    //         }
    

    //         return cnt==0;
    //     }

    //     void solve(string &curr,int n){
    //         //base case
    //         if(curr.length()==2*n){
    //             if(isValid(curr)){
    //                 result.push_back(curr);
    //             }
                
    //                 return;
                
    //         }


    //         curr.push_back('(');
    //         solve(curr,n);
    //         curr.pop_back();
    //         curr.push_back(')');
    //         solve(curr,n);
    //         curr.pop_back();
    //     }
    // vector<string> generateParenthesis(int n) {
    //     string curr="";
    //     solve(curr,n);
    //     return result;
        
    // }

    //tc o(2^2n*2n)
    //sc o(2n)


    //better

      //     vector<string>result;


    //     bool isValid(string curr){
    //         int cnt=0;

    //         for(char ch:curr){
    //             if(ch== '('){
    //                 cnt++;
    //             }
    //             else{
    //                 cnt--;
    //             }

    //             if(cnt<0){
    //                 return false;
    //             }
    //         }
    

    //         return cnt==0;
    //     }


      vector<string>result;

        void solve(string &curr,int n,int open,int close){
            //base case
            if(curr.length()==2*n){
                // if(isValid(curr)){
                   result.push_back(curr);
                // }
                
                    return;
                
            }

        
        if(open<n){
            curr.push_back('(');
            solve(curr,n,open+1,close);
            curr.pop_back();
        }

            if(close<open){
            curr.push_back(')');
            solve(curr,n,open,close+1);
            curr.pop_back();
            }
        }
    vector<string> generateParenthesis(int n) {
        string curr="";
        solve(curr,n,0,0);
        return result;
        
    }
};