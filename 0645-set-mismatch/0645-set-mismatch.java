class Solution {
    public int[] findErrorNums(int[] nums) {
       sort(nums);
         for (int i = 0; i < nums.length; i++) {
            if(nums[i] != i+1){
                return new int[] {nums[i],i+1};
            }
        }
        
        return new int[] {-1,-1};
    }
    
     void sort(int[] arr){
        int i = 0;
        while (i < arr.length){
            int correctIndex = arr[i] - 1;
            if(arr[i] != arr[correctIndex]){
                swap(arr, i,correctIndex);
            }else{
                i++;
            }
        }
    }

    void swap(int[] arr, int first, int end){
        int temp = arr[first];
        arr[first] = arr[end];
        arr[end] = temp;
    }
}