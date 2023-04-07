class Solution {
public:
    
 void bfs(vector<vector<int>>&grid,vector<vector<int>>&vis,queue<pair<int,int>>&q,int n,int m){
     int drow[]={-1,0,1,0};
     int dcol[]={0,1,0,-1};

     while(!q.empty()){
         auto temp=q.front();
         int row=temp.first;
         int col=temp.second;
         q.pop();

         for(int i=0;i<4;i++){
             int nrow=row+drow[i];
             int ncol=col+dcol[i];
             if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==1){
                 vis[nrow][ncol]=1;
                 q.push({nrow,ncol});
             }
         }
     }
 }
    int numEnclaves(vector<vector<int>>& grid) {
      //0 -sea
       //1-land

     queue<pair<int,int>>q;
     int n=grid.size();
     int m=grid[0].size();

     vector<vector<int>>vis(n,vector<int>(m,0));
//  for top left to right
     for(int i=0;i<m;i++){
         if(grid[0][i]==1){
             vis[0][i]=1;
             q.push({0,i});
             
         }
     }
// for left top to bottom
for(int i=0;i<n;i++){
    if(grid[i][0]==1){
        vis[i][0]=1;
        q.push({i,0});

    }
}

// for bottom left to right
for(int i=0;i<m;i++){
    if(grid[n-1][i]==1){
        vis[n-1][i]=1;
        q.push({n-1,i});
    }
}
// for right top to bottom
for(int i=0;i<n;i++){
    if(grid[i][m-1]==1){
        vis[i][m-1]=1;
        q.push({i,m-1});
    }
}

bfs(grid,vis,q,n,m);
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]==1&&!vis[i][j]){
            count++;
            cout<<vis[i][j]<<" ";
            cout<<i<<j;
        }
        cout<<endl;
    }
}
return count;

    }
};