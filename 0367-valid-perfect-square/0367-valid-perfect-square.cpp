class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 0;
        long long high = num;
        while(low<=high){
            long long mid = (low+high)/2;
            long long val = mid*mid;
            if(val == num) return true;
            if(val>num){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
    
};