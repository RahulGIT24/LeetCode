class Solution {
    public int findKthPositive(int[] arr, int k) {
        for(int element: arr){
            if(element<=k){
                k++;
            }
        }
        
        return k;
    }
}