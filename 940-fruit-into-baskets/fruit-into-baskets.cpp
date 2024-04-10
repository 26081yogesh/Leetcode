class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0;
        int maxLen = 0;
        unordered_map<int, int> ump;
        while(r < fruits.size()){
            ump[fruits[r]]++;
             if(ump.size() > 2){
                ump[fruits[l]]--;
                if(ump[fruits[l]] == 0){
                    ump.erase(fruits[l]);
                }
                l++;
            }
            if(ump.size() <= 2){
                maxLen = max(maxLen, r-l+1);
            }
            r++;
           
        }
        return maxLen;
    }
};