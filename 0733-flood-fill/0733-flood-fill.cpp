class Solution {
public:


void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int color,int delrow[],
int delcol[],int inicolor){
//color with new color
ans[row][col]=color;
int n=image.size();
int m=image[0].size();

//there are exactly 4 neighbours
for(int i=0;i<4;i++){
    int nrow=row+delrow[i];
    int ncol=col+delcol[i];

    //check for valid coordinates
    //check for some intial colors
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && 
    ans[nrow][ncol]!=color){
        dfs(nrow,ncol,ans,image,color,delrow,delcol,inicolor);
    }
}


}


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //get intial color
        int inicolor=image[sr][sc];
        vector<vector<int>>ans=image;

        //delta row and delta column for neighoburs
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};

        dfs(sr,sc,ans,image,color,delrow,delcol,inicolor);
        return ans;
    }
};