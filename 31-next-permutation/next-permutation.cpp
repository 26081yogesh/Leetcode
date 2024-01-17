class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Brute force approach
        // next_permutation(nums.begin(), nums.end());



        // Optimal Approach
        int index = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                index = i+1;
                break;
            }
        }

        int toswap = index-1;
        if(index == -1){
            reverse(nums.begin(), nums.end());
        }else{
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i] > nums[toswap]){
                    swap(nums[i], nums[toswap]);
                    break;
                }
            }
            int start = index;
            int end = nums.size()-1;
            while(start < end){
                swap(nums[start++], nums[end--]);
            }
        }

    }
};