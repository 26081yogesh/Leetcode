class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        for(int i=0;i<s.size();i++){
            int visitedArray[256] = {0};
            for(int j=i;j<s.size();j++){
                if(visitedArray[s[j]] == 1){
                    break;
                }
                else{
                    maxLen = max(maxLen, j-i+1);
                    visitedArray[s[j]] = 1;
                }
            }
        }
        return maxLen;
    }
};