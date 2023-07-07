class Solution {
    public int smallestDivisor(int[] nums, int threshold) {
        return search(nums,threshold);
    }
    
    int maxElem(int[] arr){
        int max = arr[0];
        for(int i = 1; i<arr.length; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        
        return max;
    }
    
    int sumOfDivisions(int[] arr, int diviser){
        int sum = 0;
        for(int i = 0; i<arr.length; i++){
            sum += Math.ceil((double)arr[i]/ (double)diviser);
        }
        
        return sum;
    }
    
    int search(int[] arr, int threshold){
        int start = 1;
        int end = maxElem(arr);
        
        while(start<=end){
            int mid = (start + end)/2;
            int result = sumOfDivisions(arr,mid);
            
            if(result<=threshold){
                end = mid-1;
            }else{
                start = mid+1;
            }
                
        }
        
        return start;
    }
}