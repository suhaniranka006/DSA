class Solution {
public:

    //tc o(n)
    //sc o(n)
    int numberOfSubstrings(string s) {
      // int cnt=0;
      // int left=0;
      // unordered_map<char,int>mp;
      // int n=s.size();
      // for(int right=0;right<s.size();right++){
      //   mp[s[right]]++;
      //   //contain all 3 char
      //   while(mp['a']>0 && mp['b']>0 && mp['c']){
      //   cnt+=n-right;
      //   mp[s[left]]--;
      //   left++;
      //   }
      // }

    //  return cnt;


    //optimied sliding window
    //last occ

    int lasta=-1;
    int lastb=-1;
    int lastc=-1;
    int cnt=0;
    int left=0;
    for(int right=0;right<s.size();right++){
      if(s[right]=='a'){
        lasta=right;
      }
      else if(s[right]=='b'){
        lastb=right;
      }
      else{
        lastc=right;
      }


      if(lasta!=-1 && lastb!=-1 && lastc!=-1){
        cnt+=min({lasta,lastb,lastc})+1;
      }
    
    }
    return cnt;

        
    }
};