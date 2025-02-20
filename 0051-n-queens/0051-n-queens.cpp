class Solution {
public:


    bool isSafe(vector<string>&board,int row,int col,int n){

            //check col of prev row
            for(int i=0;i<row;i++){
                if(board[i][col]=='Q'){
                    return false;
                }
            }

            //check upper left diagonal
            for(int i=row,j=col;i>=0 && j>=0;--i,--j){
                if(board[i][j]=='Q'){
                    return false;
                }
            }

            //check upper right diagonal
             for(int i=row,j=col;i>=0 && j<n;--i,++j){
                if(board[i][j]=='Q'){
                    return false;
                }
            }


        //if no problem found
        return true;
    }

    void placequeens(int n,vector<vector<string>>&solutions,vector<string>&board,int row){

        //if  all queens placed sueeccfully
        if(row==n){
            solutions.push_back(board);
            return ;
        }


        //try placing queen in each column of current row
        for(int col=0;col<n;col++){
            //check safe 
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                placequeens(n,solutions,board,row+1);
                //backtrack
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>solutions;
        vector<string>board(n,string(n,'.'));

        placequeens(n,solutions,board,0);
        return solutions;
    }
};