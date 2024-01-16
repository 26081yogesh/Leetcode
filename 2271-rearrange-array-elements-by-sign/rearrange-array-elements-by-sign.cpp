class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int posIndex = 0, negIndex = 1;
        for(auto num:nums){
            if(num >= 0){
                ans[posIndex] = num;
                posIndex += 2;
            }
            if(num < 0){
                ans[negIndex] = num;
                negIndex += 2;
            }
        }
        return ans;
    }
};