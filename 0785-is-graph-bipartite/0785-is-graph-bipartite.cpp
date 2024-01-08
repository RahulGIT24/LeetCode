class Solution {
private:
    bool check(int start, vector<vector<int>> &adj, int V, vector<int> &color){
        queue<int> q;
        q.push(start);
        color[start] = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it: adj[node]){
                if(color[it] == -1){
                    color[it] = !color[node];
                    q.push(it);
                }else if(color[it] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V  = graph.size();

        // convert matrix to adjacency list
        std::vector<std::vector<int>> adj(V);
        for (int i = 0; i < V; ++i) {
        for (int j : graph[i]) {
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
        
        vector<int> color(V, -1);
        for(int i = 0; i<V; i++){
            
            if(color[i] == -1){
                if(check(i,adj,V,color) == false) return false;
            }
        }
        return true;
    }
};