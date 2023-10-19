class Solution {
public:
    int found(vector<int> arr, int n){
        // case 1
        if(n==1) return arr[0];
        
        // case 2
        if(arr[0] != arr[1]) return arr[0];
        
        // case 3
        if(arr[n-1]!=arr[n-2]) return arr[n-1];
        
        // case 4
        int low = 1;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
                return arr[mid];
            }
            
            if((mid%2==1 && arr[mid] == arr[mid-1]) || (mid%2==0 && arr[mid] == arr[mid+1])){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        return -1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        return found(nums, nums.size());
    }
};