class Solution {
public:
    int max(vector<int>& arr){
    int maxi = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]>maxi) maxi = arr[i];
    }
    return maxi;
}

int sum(vector<int>& arr){
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int calculateStudents(vector<int>& arr, int pages){
    int student = 1;
    int pagesPerStudent = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(pagesPerStudent + arr[i] <= pages){
            pagesPerStudent += arr[i];
        }else{
            student++;
            pagesPerStudent = arr[i];
        }
    }
    return student;
}

int findPages(vector<int>& arr, int n, int m){
    if (m > arr.size()) return -1;
    int low = max(arr);
    int high = sum(arr);
    while(low<=high){
        int mid = (low+high)/2;
        if(calculateStudents(arr,mid)>m){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums, nums.size(), k);
    }
};