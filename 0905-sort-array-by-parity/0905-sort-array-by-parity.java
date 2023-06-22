class Solution {
    public int[] sortArrayByParity(int[] nums) {
        
        int left_ptr = 0;
        int right_ptr = nums.length-1;
        
        while(left_ptr<right_ptr){
            while(nums[left_ptr]%2==0 && left_ptr<right_ptr){
                left_ptr++;
            }
             while(nums[right_ptr]%2 == 1 && left_ptr<right_ptr){
                right_ptr--;
            }
            
            if(left_ptr<right_ptr){
                int temp;
                temp = nums[left_ptr];
                nums[left_ptr] = nums[right_ptr];
                nums[right_ptr] = temp;
                left_ptr++;
                right_ptr--;
            }
        }
        return nums;
    }
}