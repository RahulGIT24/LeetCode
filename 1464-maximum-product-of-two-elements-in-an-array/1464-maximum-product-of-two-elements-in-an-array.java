class Solution {
    public int maxProduct(int[] nums) {
        sort(nums);
        int len = nums.length;
        if(nums.length>=2){
            return (nums[len-2] - 1) * (nums[len-1] - 1);
        }
        
        return nums[0];
    }
    
    void sort(int[] arr){
        for(int i = 0; i<arr.length-1; i++){
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