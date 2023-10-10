class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex+1;
        vector<int> ans;
        long long res = 1;
        ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / i;
        ans.push_back(res);
    }
        return ans;
    }
};