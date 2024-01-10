class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for (const auto& prerequisite : prerequisites) {
            adj[prerequisite[1]].push_back(prerequisite[0]);
        }
        int V = numCourses;
         vector<int> indegree(V,0);
	    for(int i = 0; i<V; i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i = 0; i<V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    vector<int> topo;
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        for(auto it:adj[node]){
	            indegree[it]--;
	            if(indegree[it] == 0){
	                q.push(it);
	            }
	        }
	    }
        
        if(topo.size() == V) return true;
        return false;
    }
};