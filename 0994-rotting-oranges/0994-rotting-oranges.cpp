class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>,int>> q;
        int vis[n][m];
        int cFresh = 0;
        
        for(int i = 0; i<n; i++){
            for(int j =0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }else{
                    vis[i][j] = 0;
                }
                
                if(grid[i][j] == 1) cFresh++;
            }
        }
        
        int tm = 0;
        int dRow[4] = {-1,0,+1,0};
        int dCol[4] = {0,+1,0,-1};
        int count = 0;
        while(!q.empty() && cFresh > 0){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
            
            for(int i = 0; i<4; i++){
                int nRow = row + dRow[i];
                int nCol = col + dCol[i];
                if(nRow >= 0 && nRow<n && nCol >= 0 && nCol<m && vis[nRow][nCol] == 0 && grid[nRow][nCol] == 1){
                    q.push({{nRow,nCol},t+1});
                    vis[nRow][nCol] = 2;
                    count ++;
                }
            }
        }
        
        if(cFresh != count) return -1;
        
        return tm;
    }
};