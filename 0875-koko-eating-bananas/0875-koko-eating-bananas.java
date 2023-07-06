class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        return search(piles,h);
    }
    int maxElem(int[] arr){
        int max = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
    }

    int hourlyRate(int arr[], int n){
        int totalHrs = 0;

        for (int i = 0; i < arr.length; i++) {
            totalHrs += Math.ceil((double) arr[i] / (double) n);
        }

        return totalHrs;
    }

    int search(int[] arr, int target){
        int start = 1, end = maxElem(arr);

        while (start<=end){
            int mid = (start+end)/2;

            int rate = hourlyRate(arr,mid);

            if(rate <= target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return start;
    }
}