class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            bool is = false;
            for(int j=0;j<s.size();j++){
                if(i == j){
                    continue;
                }
                if(s[i] == s[j]){
                    is = true;
                    break;
                }
            }
            if(is == false){
                return i;
            }
        }
        return -1;
    }
};