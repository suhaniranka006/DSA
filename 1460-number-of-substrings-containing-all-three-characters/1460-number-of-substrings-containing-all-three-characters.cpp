class Solution {
public:
    int numberOfSubstrings(string s) {
      int cnt=0;
      int left=0;
      unordered_map<char,int>mp;
      int n=s.size();
      for(int right=0;right<s.size();right++){
        mp[s[right]]++;
        //contain all 3 char
        while(mp['a']>0 && mp['b']>0 && mp['c']){
        cnt+=n-right;
        mp[s[left]]--;
        left++;
        }
      }

      return cnt;

        
    }
};