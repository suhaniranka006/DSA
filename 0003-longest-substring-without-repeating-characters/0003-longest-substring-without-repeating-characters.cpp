class Solution {
public:

    //tc o(n^3)
    //sc o(1)
    int lengthOfLongestSubstring(string s) {
       // int maxlen=0;
        //brute force
        //phle hr substring check kro
        //uski uniqueness check kro
        //   int n=s.size();
        // for(int i=0;i<n;i++){
        //   for(int j=i;j<n;j++){
        //     string substring=s.substr(i,j-i+1);
        //       if(isunique(substring)){
        //         maxlen=max(maxlen,j-i+1);
        //       }
        //   }
        // }
        // return maxlen;

        //optimised

        int maxlen=0;
        unordered_map<char,int>mp;
      
        int left=0;
        int n=s.size();

        for(int right=0;right<n;right++){
          char c=s[right];
          if(mp.count(c)  && mp[c]>=left){
            left=mp[c]+1;

          }
          mp[c]=right;
          maxlen=max(maxlen,right-left+1);
        }

  return maxlen;
    }



    // bool isunique(string &substring){
    //   unordered_set<char>seen;
    //   for(char c:substring){
    //       if(seen.count(c)){
    //         return false;
    //       }
    //       seen.insert(c);
    //   }
    //   return true;
    
};