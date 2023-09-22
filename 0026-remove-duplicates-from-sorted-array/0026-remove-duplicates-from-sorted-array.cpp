class Solution {
public:
    int removeDuplicateElems(vector<int>& arr, int n){
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    return j;
    }
        
    int removeDuplicates(vector<int>& nums) {
        int k = removeDuplicateElems(nums,nums.size());
        return k+1;
    }
};