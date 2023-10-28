class Solution {
public:
    int maxRowIndex(vector<vector<int>>& mat, int n, int m, int col){
        int maxValue = -1;
        int index = -1;
        for(int i = 0; i<n; i++){
            if(mat[i][col]>maxValue){
                index = i;
                maxValue = mat[i][col];
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rSize = mat.size();
        int cSize = mat[0].size();
        int low = 0;
        int high = cSize-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            int maxRow = maxRowIndex(mat,rSize,cSize,mid);
            int left = mid-1>=0 ? mat[maxRow][mid-1] : -1;
            int right = mid+1<cSize ? mat[maxRow][mid+1]:-1;
            
            if(mat[maxRow][mid] > left && mat[maxRow][mid]>right){
                return {maxRow, mid};
            }else if(mat[maxRow][mid] < left){
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        
        return {-1,-1};
    }
};