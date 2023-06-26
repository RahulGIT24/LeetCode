class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        for(int num: nums1){
            int check = binarySearch(nums2,num);
            if(check != -1){
                return num;
            }
        }
        
        return -1;
    }
    
    int binarySearch(int[] arr, int target){
        int start = 0;
        int end =  arr.length-1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] == target){
                return mid;
            }
            
            if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        
        return -1;
    }
}