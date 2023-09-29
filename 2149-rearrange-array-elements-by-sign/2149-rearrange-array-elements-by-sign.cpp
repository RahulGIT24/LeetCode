class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 1;
        vector <int> v(nums.size(), 0);
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>= 0){
                v[pos] = nums[i];
                pos += 2;
            }else{
                v[neg] = nums[i];
                neg += 2;
            }
        }
        return v;
    }
};