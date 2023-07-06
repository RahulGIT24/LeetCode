class Solution {
    public int shipWithinDays(int[] weights, int days) {
      int max = weights[0]; 
    int sum = 0;
        
        // Calculating max element
        for(int i = 0; i<weights.length; i++){
            if(max<weights[i]){
                max = weights[i];
            }
        }
        
        // Calculating sum of array
        for(int i= 0; i<weights.length; i++){
            sum += weights[i];
        }
     
        return search(weights,max,sum,days);
    }
    
    
    int search(int[] arr, int start, int end, int days){
        while(start<=end){
            int mid = (start+end)/2;
            int daysTaken = noOfDays(arr,mid);
            
            if(daysTaken <= days){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return start;
    }
    
    int noOfDays(int[] arr, int capacity){
        int day = 1;
        int load = 0;
        
        for(int i = 0; i<arr.length; i++){
            if(load + arr[i] > capacity){
                day++;
                load = arr[i];
            }else{
                load += arr[i];
            }
        }
        
        return day;
    }
}