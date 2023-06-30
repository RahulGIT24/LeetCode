class Solution {
    public int[] sortedSquares(int[] nums) {
    for(int i = 0; i<nums.length; i++){
           nums[i] = nums[i] * nums[i];
    }
        sort(nums);
        return nums;
}
    
    void sort(int arr[]){
       for(int i  = 0; i<arr.length-1; i++){
           for(int j = i+1; j>0; j--){
               if(arr[j] < arr[j-1]){
                   int temp = arr[j];
                   arr[j] = arr[j-1];
                   arr[j-1] = temp;
               }
           }
       }
    }
}