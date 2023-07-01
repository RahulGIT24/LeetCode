class Solution {
    public int findDuplicate(int[] arr) {
        sort(arr);
        int ans = 0;
        for (int i = 0; i< arr.length; i++){
            if(i+1 != arr[i]){
               ans = arr[i];
                break;
            }
        }
        
        return ans;
    }
    
    void sort(int[] arr){
        int i = 0;
        while (i< arr.length){
            int correctIndex = arr[i] - 1;
            if(arr[i] != arr[correctIndex]){
                swap(arr,i,correctIndex);
            }
            else{
                i++;
            }
        }
    }

    void swap(int[] arr, int start, int end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}