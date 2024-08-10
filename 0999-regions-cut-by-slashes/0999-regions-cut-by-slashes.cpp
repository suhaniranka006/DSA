class Solution {
public:



void dfs(vector<vector<int>>&matrix,int x,int y){
if(x<0 || x>=matrix.size() || y<0 || y>=matrix[0].size() || matrix[x][y]!=0){
    return;
}

matrix[x][y]=2; // mark visited

dfs(matrix,x,y+1);
dfs(matrix,x+1,y);
dfs(matrix,x,y-1);
dfs(matrix,x-1,y);
}
    int regionsBySlashes(vector<string>& grid) {
        //coderstorywithmik -- youtube
        int rows=grid.size();
        int cols=grid[0].size();

        int regions=0;

        vector<vector<int>>matrix(rows*3,vector<int>(cols*3,0));


        //convert symblos
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='/'){
                    matrix[i*3][j*3+2]=1;
                    matrix[i*3+1][j*3+1]=1;
                    matrix[i*3+2][j*3]=1;
                }
                else if(grid[i][j]=='\\'){
                    matrix[i*3][j*3]=1;
                    matrix[i*3+1][j*3+1]=1;
                    matrix[i*3+2][j*3+2]=1;
                }
            }
        }

        //cocept of no of island
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    dfs(matrix,i,j);
                    regions++;
                }
            }
        }

        return regions;
        
    }
};