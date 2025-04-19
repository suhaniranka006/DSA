class Solution {
public:


    string minWindow(string s, string t) {

       // Edge cases: if either string is empty or s is shorter than t
    if (s.empty() || t.empty() || s.size() < t.size()) {
        return "";  // Return empty string immediately
    }

      unordered_map<char,int>freqT;


        //count characters in t
      for(char c:t){
        freqT[c]++;
      }

      //sliding window
      unordered_map<char,int>freqwindow;
      int left=0,right=0;  //window ptrs
      int required=freqT.size(); // no of unique char in t

      int cnt=0;   // how many required chr we have found
      int minlen=INT_MAX;  // smallest window size
      int startidx=0;   // tracks start of smallest windows


      //slide the window
      while(right<s.size()){
        char c=s[right];
        freqwindow[c]++;

        //check if this char complete our reiqueremnt for this char
        if(freqT.count(c) && freqwindow[c]==freqT[c]){
          cnt++; // we have satisified one more rewuired char
        }


        //step 4
        //when we ahve all req char, try to shrink window
        while(cnt==required && left<=right){
          //update min window if curr one is smaller
          if(right-left+1<minlen){
            minlen=right-left+1;
            startidx=left; // remeber where this smallest window starts
          }

          //try to shrink from left
          char leftchar=s[left];
          freqwindow[leftchar]--; // remove leftmost char from window

          //if we removed a required char and now dont have enough
          if(freqT.count(leftchar)){
            if(freqwindow[leftchar]<freqT[leftchar]){
              cnt--;  //we lost one satisfied requirement
            }
          }
          left++; // move left ptr forward
        }
        right++; // move right ptr forward to expand window

      }

      //step 5 return result
      return (minlen==INT_MAX)? "":s.substr(startidx,minlen);

        
    }
};