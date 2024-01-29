class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int> v;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] != val){
        //         v.push_back(nums[i]);
        //     }
        // }
        // nums.clear();
        // for(auto i:v){
        //     nums.push_back(i);
        // }
        // return v.size();

        int j = 0;
        int i = 0;
        while(j<nums.size()){
            if(nums[j] != val){
                int val = nums[j];
                nums[i] = val;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
};