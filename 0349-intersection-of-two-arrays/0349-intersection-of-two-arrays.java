class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        ArrayList<Integer> ans = new ArrayList<>();
        
        if(nums1.length<nums2.length){
            for(int i = 0; i<nums1.length; i++){
                int index = binarySearch(nums2,nums1[i]);
                if(index!=-1 && !ans.contains(index)){
                    ans.add(index);
                }
            }
        }else{
             for(int i = 0; i<nums2.length; i++){
                int index = binarySearch(nums1,nums2[i]);
                if(index!=-1 && !ans.contains(index)){
                    ans.add(index);
                }
            }
        }
        
        
        int[] elements = new int[ans.size()];
        for(int i = 0; i<elements.length; i++){
            elements[i] = ans.get(i);
        }
        
        return elements;
    }
    
    int binarySearch(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(arr[mid] == target){
                return arr[mid];
            }
             
            if(arr[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return -1;
    }
}