class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int i=0;i<nums.size();i++){
        //     if(mp.find(nums[i]) == mp.end()){
        //         mp[nums[i]]++;
        //     }
        //     else{
        //         return true;
        //     }
        // }
        // return false;

        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};