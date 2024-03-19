class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> ump;
        for(int i=0;i<numbers.size();i++){
            int diff = target-numbers[i];
            cout<<diff<<endl;
            if(ump.find(diff) == ump.end()){
                ump[numbers[i]] = i;
            }
            else{
                return {ump[diff]+1, i+1};
            }
        }
        return {-1, -1};
    }
};