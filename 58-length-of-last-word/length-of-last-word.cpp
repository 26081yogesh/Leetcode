class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int count = 0;
        while(i >= 0){
            if(s[i] != ' '){
                count++;
                i--;
            }
            else if(s[i] == ' ' and count == 0){
                i--;
            }
            else{
                break;
            }
            
        }
        return count;
    }
};