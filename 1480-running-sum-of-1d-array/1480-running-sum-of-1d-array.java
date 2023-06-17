class Solution {
    public int[] runningSum(int[] nums) {
        int len = nums.length;
        int previous_element = 0;
        
        for(int i=1; i<len; i++){
            previous_element = nums[i-1];
            nums[i] += previous_element;
        }
        return nums;
    }
}