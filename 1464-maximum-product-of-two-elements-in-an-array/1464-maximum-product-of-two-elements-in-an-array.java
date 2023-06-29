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
        int temp;
        boolean swap;
        for(int i = 0; i<arr.length; i++){
            swap = false;
            for(int j = 1; j<arr.length-i; j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                    swap = true;
                }
            }
            
            if(!swap){
                break;
            }
        }
    }
}