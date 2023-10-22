class Solution {
public:
    int maxElem(vector<int>& arr){
        int n = arr.size();
        int max = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]>max) max = arr[i];
        }
        return max;
    }
    
    double foundDivisor(vector<int>& arr, int mid){
        int n = arr.size();
        double ans = 0;
        for(int i = 0; i<n; i++){
            ans += ceil((double) (arr[i]) / (double)(mid));
        }
        return ans;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if(n>threshold) return -1;
        int low = 0, high =  maxElem(nums);
        while(low<=high){
            int mid = (low+high)/2;
            double divisor = foundDivisor(nums,mid);
            if(divisor<=threshold){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};