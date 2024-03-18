class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> ump;
        for(int i=0;i<nums.size();i++){
            if(ump[nums[i]] != 2){
                ump[nums[i]]++;
            }
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(ump.find(nums[i]) != ump.end() and ump[nums[i]] > 0){
                ump[nums[i]]--;
                v.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto i:v){
            nums.push_back(i);
        }
        return v.size();
    }
};