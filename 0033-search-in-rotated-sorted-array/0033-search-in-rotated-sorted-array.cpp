class Solution {
public:
    int searchBS(vector<int>& arr, int target){
        int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid])
        {
            // left sorted
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            // right sorted
            if (arr[high] >= target && target >= arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

    int search(vector<int>& nums, int target) {
        return searchBS(nums, target);
    }
};