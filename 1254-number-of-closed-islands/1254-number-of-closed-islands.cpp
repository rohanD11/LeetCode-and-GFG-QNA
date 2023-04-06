class Solution {
public:

  void bfs(vector<vector<int>>&grid,vector<vector<int>>&vis,queue<pair<int,int>>&q,int n,int m){
      while(!q.empty()){
    auto temp=q.front();
    q.pop();
    int row=temp.first;
    int col=temp.second;
    int drow[]={0,1,0,-1};
    int dcol[]={1,0,-1,0};
    for(int i=0;i<4;i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==0){
            vis[nrow][ncol]=1;
            q.push({nrow,ncol});
        }
    }
}
  }
    int closedIsland(vector<vector<int>>& grid) {
    // 0 land
    //  1  water 
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<int,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    //left to right
    for(int i=0;i<m;i++){
        if(grid[0][i]==0){
            vis[0][i]=1;
            q.push({0,i});
        }
    }
    //top to botton from left
    for(int i=0;i<n;i++){
        if(grid[i][0]==0){
            vis[i][0]=1;
            q.push({i,0});
        }
    }
// top to bottom from right
  for(int i=0;i<n;i++){
      if(grid[i][m-1]==0){
          vis[i][m-1]=1;
          q.push({i,m-1});
      }
  }

  //left to right from bottom
  for(int i=0;i<m;i++){
      if(grid[n-1][i]==0){
          vis[n-1][i]=1;
          q.push({n-1,i});
      }
  }

//BFS
bfs(grid,vis,q,n,m);
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j]&&grid[i][j]==0){
            q.push({i,j});
            vis[i][j]=1;
            count++;
            bfs(grid,vis,q,n,m);
            
        }
    }
}

return count;

    
    }
};