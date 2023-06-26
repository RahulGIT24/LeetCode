class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        for(int num: nums1){
            boolean check = binarySearch(nums2,num);
            if(check){
                return num;
            }
        }
        
        return -1;
    }
    
    boolean binarySearch(int[] arr, int target){
        int start = 0;
        int end =  arr.length-1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] == target){
                return true;
            }
            
            if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        
        return false;
    }
}