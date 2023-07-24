class Solution {
    public int search(int[] nums, int target) {
        return Binarysearch(nums, target, 0, nums.length - 1);
    }
    
    int Binarysearch(int[] arr, int target, int s, int e){
        
     if (s > e) {
            return -1;
        }
        int m = s + (e - s) / 2;
        if (arr[m] == target) {
            return m;
        }
        if (target < arr[m]) {
            return Binarysearch(arr, target, s, m - 1);
        }
        return Binarysearch(arr, target, m + 1, e);
    }
    
}