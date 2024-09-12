class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        if(allowed.empty()){
            return 0;
        }
       
        set<char>s(allowed.begin(),allowed.end());
       
        int cnt=0;
    for(int i=0;i<words.size();i++){
            bool flag=true;
        for(int str=0;str<words[i].size();str++){
            if((s.find(words[i][str])==s.end())){
             flag=false;
             break;
           
        }
        }
        if(flag){
            cnt++;
        }
        
        

    }
    return cnt;



        
    }
};