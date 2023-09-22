class Solution {
public:
    
    void swap(vector<int>& arr, int start, int end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
    }
    
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }
        
        if(j==-1) return;
        
        for(int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums,i,j);
                j++;
            }
        }
    }
};