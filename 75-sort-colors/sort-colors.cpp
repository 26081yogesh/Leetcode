class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                zeroCount++;
            }
            else if(nums[i] == 1){
                oneCount++;
            }
            else{
                twoCount++;
            }
        }
        
        int index = 0;
        while(zeroCount != 0){
            nums[index++] = 0;
            zeroCount--;
        }
        while(oneCount != 0){
            nums[index++] = 1;
            oneCount--;
        }
        while(twoCount != 0){
            nums[index++] = 2;
            twoCount--;
        }
    }
};