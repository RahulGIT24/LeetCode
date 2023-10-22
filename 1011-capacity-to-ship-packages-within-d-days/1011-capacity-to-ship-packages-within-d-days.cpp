class Solution {
public:
    int sum(vector<int>& arr){
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        return sum;
    }
    
    int max(vector<int> arr){
        int max = arr[0];
        int n =  arr.size();
        for(int i = 1; i<n; i++){
            if(arr[i]>max) max = arr[i];
        }
        return max;
    }
    
    int load(vector<int> arr, int capacity){
        int day = 1;
        int load = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] + load > capacity){
                day++;
                load = arr[i];
            }else{
                load += arr[i];
            }
        }
        return day;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = max(weights);
        int high = sum(weights);
        while(low<=high){  
            int mid = (low+high)/2;
            int day = load(weights, mid);
            if(day<=days){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};