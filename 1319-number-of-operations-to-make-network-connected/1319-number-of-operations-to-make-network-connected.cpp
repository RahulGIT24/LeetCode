class DisjointSet
{
    

public:
    vector<int> parent,size;
    DisjointSet(int n)
    {
        parent.resize(n+1,0);
        size.resize(n+1,1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findPar(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findPar(parent[node]); // path compression
    }

    void unionbysize(int u, int v){
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);
        if(ulp_u == ulp_v){
            return;
        }
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int cntExtras = 0;
        for(auto it:connections){
            int u = it[0];
            int v = it[1];
            if(ds.findPar(u) == ds.findPar(v)){
                cntExtras ++;
            }else{
                ds.unionbysize(u,v);
            }
        }
        int cntC = 0;
        for(int i = 0; i<n; i++){
            if(ds.parent[i] == i) cntC++;
        }
        int ans = cntC - 1;
        if(cntExtras >= ans) return ans;
        return -1;
    }
};