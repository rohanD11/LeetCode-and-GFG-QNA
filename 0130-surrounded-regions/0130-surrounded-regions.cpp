class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
       vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            if(board[0][i]=='O'){
                vis[0][i]=1;
                q.push({0,i});
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                vis[i][0]=1;
                q.push({i,0});
            }
        }
        for(int i=0;i<m;i++){
            if(board[n-1][i]=='O'){
                vis[n-1][i]=1;
                q.push({n-1,i});
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][m-1]=='O'){
                vis[i][m-1]=1;
                q.push({i,m-1});
            }
        }
    //BFS
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
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&board[nrow][ncol]=='O'){
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0&&board[i][j]=='O')
                board[i][j]='X';
                // cout<<vis[i][j]<<endl;
            }
        }
    
       

    }
};