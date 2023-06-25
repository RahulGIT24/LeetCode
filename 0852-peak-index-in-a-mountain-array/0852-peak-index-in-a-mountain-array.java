class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length-1;
        
        while(start<end){
            int mid = start + (end - start)/2;
            int mid2 = mid+1;
            if(arr[mid]<arr[mid2]){
                start = mid2;
            }else{
                end = mid;
            }
        }
        return start;
    }
}