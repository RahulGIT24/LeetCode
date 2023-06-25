/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int peak = peak(mountainArr);
        
        int firstTry = search(mountainArr, target, 0,peak);
        
        if(firstTry != -1){
            return firstTry;
        }
        return search(mountainArr, target, peak+1, mountainArr.length()-1);
    }
    
    int peak(MountainArray nums){
         int start = 0;
        int end = nums.length()-1;
        
        while(start<end){
            int mid = start + (end - start)/2;
            int mid2 = mid+1;
            
            if(nums.get(mid)<nums.get(mid2)){
                start = mid2;
            }else{
                end = mid;
            }
        }
            
       return start;
    }
    
    int search(MountainArray arr, int target, int start, int end){
        
        boolean isAsc = arr.get(start)<arr.get(end);
        
         while(start<=end){
            int mid = start + (end - start)/2;
            
            if(arr.get(mid) == target){
                return mid;
            }
             
             if(isAsc){
                 if(arr.get(mid)>target){
                 end = mid-1;
                }   else{
                 start = mid+1;
                }
             }else{
                  if(arr.get(mid)<target){
                 end = mid-1;
                }   else{
                 start = mid+1;
                }
             }
             
        }
        
        return -1;
    }
       
}