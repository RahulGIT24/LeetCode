class Solution {
public:
    int search(vector<int>& arr, int n, int target, int Findex){
        int ans = -1;
        
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>target){
                high = mid-1;
            }else if(arr[mid]<target){
                low = mid+1;
            }else{
                // potential answer
                ans = mid;
                if(Findex==0){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
        
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        
        ans[0] = search(nums, nums.size(), target, 0);
        if(ans[0] != -1){
            ans[1] = search(nums, nums.size(), target, 1);
        }
        
        return ans;
    }
};