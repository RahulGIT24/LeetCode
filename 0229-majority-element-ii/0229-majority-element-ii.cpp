class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        
        for(int i = 0; i<n; i++){
            if(cnt1==0 && nums[i] != el2){
                el1 = nums[i];
                cnt1++;
            }else if(cnt2==0 && nums[i] != el1){
                el2 = nums[i];
                cnt2++;
            }else if(el1 == nums[i]){ 
                cnt1++;
            }else if(el2 == nums[i]){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        vector<int> ans;
        for(int i = 0; i<n; i++){
            if(nums[i] == el1) cnt1++;
            if(nums[i] == el2) cnt2++;
        }
        
        int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ans.push_back(el1);
    if (cnt2 >= mini) ans.push_back(el2);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};