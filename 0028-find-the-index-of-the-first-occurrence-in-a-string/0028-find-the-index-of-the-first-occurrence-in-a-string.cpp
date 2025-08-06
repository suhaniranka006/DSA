class Solution {
public:
    int strStr(string haystack, string needle) {
        int long_n1=haystack.size()-1;
        int short_n2=needle.size()-1;

        if(short_n2>long_n1){
            return -1;
        } 

        int first=0;
        int second=0;

        while(first<=long_n1){



            if(haystack[first]!=needle[second]){
                first=first-second;
                second=0;
                
            }

            else{
                second++;
            }
           
            first++;
            

            if(second==short_n2+1){
               return abs(short_n2+1-first);  
                
            }
          
        }     

        return -1;
    }
};