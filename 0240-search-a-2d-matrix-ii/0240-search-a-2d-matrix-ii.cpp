class Solution {
public:
    int binarySearch(vector<int> matrix, int target){
        int n = matrix.size();
       int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid] == target){
                return mid;
            }
            if(matrix[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return -1;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int ans = -1;
        for(int i = 0; i<rowSize; i++){
            if(matrix[i][0] <= target && matrix[i][colSize-1] >= target){
                ans = binarySearch(matrix[i],target);
            } 
            if(ans != -1){
                return true;
            }
            continue;
        }
        return false;
    }
};