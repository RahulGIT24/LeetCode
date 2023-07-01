class Solution {
    public List<Integer> findDuplicates(int[] nums) {
       sort(nums);

        ArrayList<Integer> list = new ArrayList<>();
for (int i = 0; i< nums.length; i++){
            if(i+1 != nums[i]){
                list.add(nums[i]);
            }
        }

       return list;
    }
    
void sort(int[] arr){
        int i = 0;
        while (i < arr.length){
            int correctIndex = arr[i] - 1;
            if(arr[i] != arr[correctIndex]){
                swap(arr, i, correctIndex);
            }else{
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