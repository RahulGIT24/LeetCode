class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        
        // Case 1
        if(n==1){
            return nums[0];
        }
        
        // Case 2
        if(nums[0] != nums[1]){
            return nums[0];
        }
        
        // Case 3 
        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }
        
        // Case 4
        int start = 1;
        int end = n-2;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] != nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            
            // Eleminating left half
            if((mid%2 == 1 && nums[mid - 1] == nums[mid]) || mid%2==0 && nums[mid] == nums[mid+1]){
                start = mid+1;
            }else{
                // Eleminating right half
                end = mid-1;
            }
        }
        return -1;
    }
}