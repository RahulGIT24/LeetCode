class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        ArrayList<Integer> arr = new ArrayList<>();
        
       int i = 0;
        int j = 0;
        while (i < nums1.length && j < nums2.length) {
            if (nums1[i] == nums2[j]) {
                arr.add(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        int[] ansArr = new int[arr.size()];
        for (int k = 0; k < ansArr.length; k++) {
            ansArr[k] = arr.get(k);
        }
        
        return ansArr;
    }
    
    int binarySearch(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(arr[mid] == target){
                return arr[mid];
            }
             
            if(arr[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return -1;
    }
}