class Solution {
    public boolean containsDuplicate(int[] nums) {
        return sort(nums);
    }
     boolean sort(int[] arr){
        boolean swap;
        for (int i = 0; i<arr.length; i++){
            swap = false;
            for (int j = 1; j < arr.length-i; j++) {
                if(arr[j-1]>arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swap = true;
                }
                if(arr[j-1] ==arr[j]){
                    return true;
                }
            }
            if(!swap){
                break;
            }
        }
         
         return false;
    }
}