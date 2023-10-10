class Solution {
public:
    
    vector<int> generateRow(int r){
        long long ans = 1;
        vector <int> res;
        res.push_back(1);
        for(int i = 1; i<r; i++){
            ans = ans * (r-i);
            ans = ans/i;
            res.push_back(ans);
        }
        return res;
    }
    
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};