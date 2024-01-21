class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // Dijkstra Algo + ways array

        int mod=1e9+7;

        // adjacency list
        vector<pair<int,int>> adj[n];

        for(auto i: roads)
        {
            int u=i[0];
            int v=i[1];
            int wt=i[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        // distance, node
        priority_queue<pair<long,long>, vector<pair<long,long>>, 
                    greater<pair<long,long>>> pq;
        pq.push({0, 0});

        vector<long> dist(n, 1e18);
        vector<int> ways(n, 0);

        dist[0]=0;
        ways[0]=1;

        while(!pq.empty())
        {
            long distance=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            for(auto i: adj[node])
            {
                int adjNode=i.first;
                int weight=i.second;

                // first time coming with shortest distance
                if(distance+weight < dist[adjNode])
                {
                    dist[adjNode]=distance+weight;
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode]=ways[node]%mod;
                }
                else if(distance+weight==dist[adjNode])
                {
                    ways[adjNode]=(ways[adjNode]+ways[node])%mod;
                }
            }
        }

        return ways[n-1]%mod;
    }
};