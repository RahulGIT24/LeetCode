class Solution {
    public double average(int[] salary) {
        sort(salary);
        
        int denom = 0;
        double sum = 0;
        
        for(int i = 1; i<=salary.length-2; i++){
            sum += salary[i];
            denom ++;
        }
        
        return sum/denom;
        
    }
    
    void sort(int[] arr){
        int temp;
        boolean swap;
        for(int i = 0; i<arr.length; i++){
            swap = false;
            for(int j = 1; j<arr.length-i; j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                    swap = true;
                }
            }
            
            if(!swap){
                break;
            }
        }
    }
}