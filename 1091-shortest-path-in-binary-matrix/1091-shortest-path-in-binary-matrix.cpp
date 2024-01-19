class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n =  grid.size();
        pair<int,int> source = {0,0};
        if(grid[source.first][source.second] != 0) return -1;
        pair<int,int> destination = {n-1, n-1};
        if(source.first==destination.first && source.second==destination.second) 
    return 1; 
        
        
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(n, vector<int>(n,1e9));
        
        dist[source.first][source.second] = 0;
        q.push({0, {source.first,source.second}});
        
        int dRow[] = {-1,0,+1,0,-1,-1,+1,+1};
        int dCol[] = {0,+1,0,-1,+1,-1,+1,-1};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int r = it.second.first;
            int c = it.second.second;
            for(int i = 0; i<8; i++){
                int nRow = dRow[i] + r;
                int nCol = dCol[i] + c;
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<n && grid[nRow][nCol] == 0 && 1+dis < dist[nRow][nCol]){
                    dist[nRow][nCol] = 1 + dis;
                    if(nRow == destination.first && nCol == destination.second) return 2+dis;
                    q.push({1 + dis, {nRow, nCol}});
                }
            }
        }
        return -1;
    }
};