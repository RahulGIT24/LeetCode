class Solution {
public:
    // Get minimum element
    int min(vector<int>& arr, int n){
        int min = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]<min) min = arr[i];
        }
        return min;
    }
    
    // Get maximum element
    int max(vector<int>& arr, int n){
        int max = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]>max) max = arr[i];
        }
        return max;
    }
    
    // Possible
    int possible(vector<int>& arr, int day, int m, int k){
        int n = arr.size();
        int cnt = 0;
        int Bcount = 0;
        for(int i = 0; i<n; i++){
            if(arr[i]<=day){
                cnt++;
            }else{
                Bcount += (cnt/k);
                cnt = 0;
            }
        }
        Bcount += (cnt/k);
        return Bcount >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if(n<val) return -1;
        int low = min(bloomDay,n);
        int high = max(bloomDay,n);
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};