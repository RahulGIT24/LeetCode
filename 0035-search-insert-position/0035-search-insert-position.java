class Solution {
    public int searchInsert(int[] nums, int target) {
        int ans = search(nums, target);
        return ans;
    }
    
    int search(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(arr[mid]==target){
                return mid;
            }
            
            if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return start;
    }
}