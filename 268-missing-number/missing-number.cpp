class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(), nums.end());
        int i = 0;
        for(auto j:nums){
            if(i != j){
                ans = i;
                break;
            }
            i++;
        }
        if(ans == -1){
            return nums.size();
        }
        return ans;
    }
};