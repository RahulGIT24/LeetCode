class Solution {
public:
    int search(vector<int> arr, int n){
        int low = 0;
        int high = n - 1;
        while(low<high){
            int mid = (low+high)/2;
            int mid2 = mid+1;
            if(arr[mid]<arr[mid2]){
                low = mid2;
            }else{
                high = mid;
            }
        }
        return low;
    }
    int findPeakElement(vector<int>& nums) {
        return search(nums, nums.size());
    }
};