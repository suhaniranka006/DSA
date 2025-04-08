class Solution {
public:


      // bool isunique(string &substring){
      //   unordered_set<char>st;

      //   for(char c:substring){
      //     if(st.count(c)){
      //       return false;
      //     }
      //     st.insert(c);
      //   }
      //   return true;
      // }


    int lengthOfLongestSubstring(string s) {
        
        //brute force 
        //find all substring
        // //check unique characters
        // int maxlen=0;
        // int n=s.size();
        // for(int i=0;i<n;i++){
        //   for(int j=i;j<n;j++){
        //     string substring=s.substr(i,j-i+1);
        //       if(isunique(substring)){
        //         maxlen=max(maxlen,j-i+1);
        //       }
        //     }
        //   }
        
      //  return maxlen;
        //tc o(n^3)
        //sc o(n)
        //gives tle 


        //optimised
        //sliding window
        int left=0;
        int maxlen=0;
        unordered_set<char>st;
        for(int right=0;right<s.size();right++){
          while(st.count(s[right])){
            st.erase(s[left]);
            left++;
          }
          st.insert(s[right]);
          maxlen=max(maxlen,right-left+1);

         
          
        }
        return maxlen;
    }

   
};