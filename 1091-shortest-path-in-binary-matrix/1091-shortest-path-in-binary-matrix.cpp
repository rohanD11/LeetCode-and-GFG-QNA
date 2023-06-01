class Solution {
public:

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0){
            return -1;
        }
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1)return 1;

        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        int drow[]={-1,-1,0,1,1,1,0,-1};
        int dcol[]={0,-1,-1,-1,0,1,1,1};
        vis[0][0]=1;
        while(!q.empty()){
         auto temp=q.front();
         q.pop();
         auto ind=temp.first;
         auto len=temp.second;
         int i=ind.first;
         int j=ind.second;
         for(int x=0;x<8;x++){
             int nrow=drow[x]+i;
             int ncol=dcol[x]+j;
             if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==0){
                 q.push({{nrow,ncol},len+1});
                 vis[nrow][ncol]=1;
                 if(nrow==n-1&&ncol==m-1){
                     return len+1;
                 }
             }
         }
        }
        return -1;
            }
};