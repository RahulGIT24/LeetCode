class Solution {
    public int missingNumber(int[] nums) {
        sort(nums);
        int len = nums.length;
        
        for(int i = 0; i<nums.length; i++){
            if(nums[i] != i ){
                return i;
            }
        }
        
        return len;
    }
    
   void sort(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            for (int j = 1; j < arr.length-i; j++) {
                if(arr[j-1] > arr[j]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}