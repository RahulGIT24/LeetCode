class Solution {
    public int maximumCount(int[] nums) {
        int positiveC = 0;
        int negativeC = 0;
        
       for(int i = 0; i<nums.length; i++){
            if(nums[i]<0){
                negativeC ++;
            }else if(nums[i]!=0 && nums[i]>0){
                positiveC++;
            }
        }
        
        if(positiveC == negativeC){
            return positiveC;
        }else{
            int max = Math.max(positiveC,negativeC);
            return max;
        }
    }
}