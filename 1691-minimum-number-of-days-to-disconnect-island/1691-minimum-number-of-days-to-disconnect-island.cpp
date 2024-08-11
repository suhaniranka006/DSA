class Solution {
public:



 
 //brute force
 //editorial
 //flood-fill algo



//direction for adjacent cells
const vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};




bool isValidLandCell(const vector<vector<int>>&grid,int row,int col, const vector<vector<bool>>&visited){
int rows=grid.size();
int cols=grid[0].size();

//check bound land and not visited

return row>=0 && col>=0 && row<rows && col<cols && grid[row][col]==1 && !visited[row][col];
}



void exploreIsland(vector<vector<int>>&grid,int i,int j,vector<vector<bool>>&visited){
    visited[i][j]=true;


    for(auto direction : dir){
        int newRow=i+direction[0];
        int newCol=j+direction[1];

        if(isValidLandCell(grid,newRow,newCol,visited)){
            exploreIsland(grid,newRow,newCol,visited);
        }
    }
}


int countIslands(vector<vector<int>>&grid){
    int rows=grid.size();
    int cols=grid[0].size();

    vector<vector<bool>>visited(rows,vector<bool>(cols,0));


    int islandCount=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(!visited[i][j] && grid[i][j]==1){
                exploreIsland(grid,i,j,visited);
                islandCount++;

            }
        }
    }
    return islandCount;
}






int minDays(vector<vector<int>>& grid) {
  int rows=grid.size();
  int cols=grid[0].size();


    //intially count islands
  int initialIslandCount=countIslands(grid);


  if(initialIslandCount!=1){
    return 0;
  }

  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){

        if(grid[i][j]==0){
            continue;
        }
        grid[i][j]=0;


        int newIslandCount=countIslands(grid);

        if(newIslandCount!=1){
            return 1;
        }
        grid[i][j]=1;

    }
  }


    return 2;
}

   

};