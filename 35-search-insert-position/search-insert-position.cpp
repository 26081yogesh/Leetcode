class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool isFound = false;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                return i;
            }
            else if(target < nums[i]){
                return i;
            }
        }
        return nums.size();
    }
};