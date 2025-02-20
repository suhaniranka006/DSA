class Solution {
public:


  void solve(int ind,string digits,vector<string>&ans,string output,string mapping[]){
        if(ind>=digits.length()){
            ans.push_back(output);
            return;
        }

        int number=digits[ind]-'0';
        string value=mapping[number];



        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);

            solve(ind+1,digits,ans,output,mapping);
            output.pop_back();
        }

        
    }
    vector<string> letterCombinations(string digits) {



            string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output="";
        int ind=0;
        
        solve(ind,digits,ans,output,mapping);
        return ans;
        
    }

  
};