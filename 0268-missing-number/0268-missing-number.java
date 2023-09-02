class Solution {
    public int missingNumber(int[] nums) {
       sort(nums);
        for(int i = 0; i<nums.length; i++){
            if(nums[i] != i){
                return i;
            }
        }
        
        return nums.length;
    }
    void sort(int[] arr){
        int i = 0;
        while(i<arr.length){
            int correctIndex = arr[i];
            if(arr[i]<arr.length && arr[i] != arr[correctIndex]){
                swap(arr, i , correctIndex);
            }else{
                i++;
            }
        }
    }
    
    void swap(int[] arr, int start, int end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}