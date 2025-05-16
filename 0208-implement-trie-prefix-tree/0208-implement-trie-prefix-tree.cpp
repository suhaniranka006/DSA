
class TrieNode{
  public:
  char data;
  TrieNode* children[26];
  bool flag;
  TrieNode(char ch){
    data=ch;
    for(int i=0;i<26;i++){
      children[i]=NULL;
    }
    flag = false;

  }
  ~TrieNode(){

    for(int i=0;i<26;i++){
      if(children[i]!=NULL){
        delete children[i];
      }
    }

  }
};

class Trie {
public:
TrieNode* root;
    Trie() {
      root = new TrieNode('\0');
        
    }
    ~Trie(){
      delete root;
    }

    void insertUtil(TrieNode* root,const string &word){

        if(word.length()==0){
          root->flag=true;
          return;
        }

        int index=word[0]-'a';
        if(index<0 || index>=26){
          return;
        }

        TrieNode* child;

        if(root->children[index]!=NULL){
          child=root->children[index];
        }
        else {
          child=new TrieNode(word[0]);
          root->children[index]=child;
        }

        insertUtil(child,word.substr(1));




    }
    void insert(string word) {
       insertUtil(root,word);
        
    }
    

    bool searchUtil(TrieNode* root, const string &word){
      if(word.length()==0){
      return root->flag;
      }
      int index=word[0]-'a';

      if(index<0 || index>=26){
        return false;
      }

      TrieNode* child;
      if(root->children[index]!=NULL){
        child=root->children[index];
      }
      else{
        return false;
      }
      return searchUtil(child,word.substr(1));

    }
    bool search(string word) {
      return searchUtil(root,word);
        
    }
    

    bool stUtil(TrieNode* root, const string &prefix){
      if(prefix.length()==0){
        return true;
      }
      int index=prefix[0]-'a';
      if(index<0 || index>=26){
        return false;
      }
      TrieNode* child;
      if(root->children[index]!=NULL){
        child=root->children[index];
      }
      else{
        return false;
      }
     return stUtil(child,prefix.substr(1));

    }
    bool startsWith(string prefix) {

      return stUtil(root,prefix);
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */