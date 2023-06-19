class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] answer = new int[nums.length];
        
        for(int i = 0; i<nums.length; i++){
            int min = 0;
            for(int j = 0; j<nums.length; j++){
                if(j!=i && nums[j]<nums[i]){
                    min++;
                }
                answer[i] = min;
            }
        }
        return answer;
    }
}