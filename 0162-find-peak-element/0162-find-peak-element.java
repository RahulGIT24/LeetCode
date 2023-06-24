class Solution {
    public int findPeakElement(int[] nums) {
        int start  = 0;
        int end = nums.length-1;
        
        while(start<end){
            int mid = start + (end - start)/2;
            int mid2 = mid+1;
            
            if(nums[mid]<nums[mid2]){
                start = mid2;
            }else{
                end = mid;
            }
        }
        
        return start;
    }
}