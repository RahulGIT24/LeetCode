class Solution {
        public int splitArray(int[] nums, int k) {
        int start = 0;
        int end = 0;

        for (int i = 0; i < nums.length; i++) {
            start = Math.max(start,nums[i]); // in the end of loop this will contain max element index
            end += nums[i];
        }

        // binary search
        while(start<end){
            // try for the middle as potential answer
            int mid = start + (end-start)/2;

            // calculate how many pieces you can divide this with max sum
            int sum = 0;
            int pieces = 1;
            for (int num:nums) {
                if (sum + num > mid) {
                    // you can't add this to subarray make new one
                    // say add this in new subarray, then num = sum
                    sum = num;
                    pieces++;
                } else {
                    sum += num;
                }
            }

            if(pieces>k){
                start = mid+1;
            }else{
                end = mid;
            }

        }
        return end; // here start is equal to end
    }
}