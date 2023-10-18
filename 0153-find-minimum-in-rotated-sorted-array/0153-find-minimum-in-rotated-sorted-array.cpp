class Solution {
public:
    int search(vector<int>& arr, int n){
        int ans = INT_MAX;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[low]<=arr[high]){
                ans = min(ans,arr[low]);
                break;
            }
            
            // left sorted
            if(arr[mid]>=arr[low]){
                ans = min(ans,arr[low]);
                low = mid+1;
            }else{
                // right sorted
                ans = min(ans, arr[mid]);
                high = mid-1;
            }
        }
        return ans;
        
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();
        return search(nums, n);
    }
};