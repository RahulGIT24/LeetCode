class Solution {
    public int majorityElement(int[] nums) {
        sort(nums);
        return nums[nums.length/2];
    }
    
        static void sort(int[] arr){
        boolean swap;
        for (int i = 0; i<arr.length; i++){
            swap = false;
            for (int j = 1; j < arr.length-i; j++) {
                if(arr[j-1]>arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swap = true;
                }
            }
            if(!swap){
                break;
            }
        }
    }
}