class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;

        for (int num: nums) {
            if(even(num)){
                count++;
            }
        }
     return count;
        
    }
    
    boolean even(int num){
        int numberOfDigits = digit(num);
        return numberOfDigits % 2 == 0;
    }
    
    int digit(int num){
        if(num<0){
            num = num*-1;
        }

        int count = 0;
        while (num>0){
            count++;
            num/=10;
        }
       return  count;
    }
}