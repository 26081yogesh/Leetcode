class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Brute force using extra space O(n)
        // unordered_map<int, int> ump;
        // for(int i=0;i<numbers.size();i++){
        //     int diff = target-numbers[i];
        //     cout<<diff<<endl;
        //     if(ump.find(diff) == ump.end()){
        //         ump[numbers[i]] = i;
        //     }
        //     else{
        //         return {ump[diff]+1, i+1};
        //     }
        // }
        // return {-1, -1};

        int start = 0;
        int end = numbers.size()-1;
        while(start < end){
            int sum = numbers[start]+numbers[end];
            if(sum == target){
                return {start+1, end+1};
            }
            else if(sum > target){
                end--;
            }
            else{
                start++;
            }
        }
        return {};
    }
};