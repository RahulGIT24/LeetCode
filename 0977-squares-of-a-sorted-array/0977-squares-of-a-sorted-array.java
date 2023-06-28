class Solution {
    public int[] sortedSquares(int[] nums) {
    for(int i = 0; i<nums.length; i++){
           nums[i] = nums[i] * nums[i];
       }
    sort(nums);
        return nums;
    }
    
    void sort(int arr[]){
        boolean swapped;
        for(int i = 0; i<arr.length-1; i++){
            swapped = false;
            for(int j = 1; j<arr.length-i; j++){
                if(arr[j-1]> arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            
            if(!swapped){
                break;
            }
        }
    }
}