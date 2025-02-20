class Solution {
public:


        bool solve(vector<vector<char>>&board,string word,int row,int col,int index){
            if(index==word.length()){
                return true;
            }

            if(row<0 || row>=board.size()  || col<0 || col>=board[0].size() || board[row][col]!=word[index] ){
                return false;
            }


            char ch=board[row][col];
            board[row][col]='#';

            bool ans = solve(board,word,row+1,col,index+1) ||
                        solve(board,word,row,col+1,index+1) ||
                        solve(board,word,row-1,col,index+1) ||
                        solve(board,word,row,col-1,index+1) ;

        board[row][col]=ch;

        return ans;
        }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         if((solve(board,word,i,j,0))){
                return true;
            }
        }
        }

        return false;
    }
};