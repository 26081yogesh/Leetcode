class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int countZero = 0;
        int maxLen = 0;
        int l=0, r=0;
        while(r<nums.size()){
            if(nums[r] == 0){
                countZero++;
            }
            if(countZero > k){
                if(nums[l] == 0){
                    countZero--;
                }
                l++;
            }
            if(countZero <= k){
                maxLen = max(maxLen, r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};