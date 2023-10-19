class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
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
};