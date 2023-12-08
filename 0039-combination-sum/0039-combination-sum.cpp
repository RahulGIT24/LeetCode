class Solution {
public:
    
    void combination(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){

    if(index == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[index]<=target){
        ds.push_back(arr[index]);
        combination(index,  target-arr[index], arr, ans, ds);
        ds.pop_back();
    }

    // not pick
    combination(index+1,  target, arr, ans, ds);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(0,target,candidates,ans,ds);
        
        return ans;
    }
};