class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<int,int>freq;
      int most_freq=0;
      int left=0;
      int maxlen=0;

      for(int right=0;right<s.size();right++){
        freq[s[right]]++;
        most_freq=max(most_freq,freq[s[right]]);

        if((right-left+1-most_freq)>k){
          freq[s[left]]--;
          left++;

        }
        maxlen=max(maxlen,right-left+1);
      }
      return maxlen;
        
    }
};