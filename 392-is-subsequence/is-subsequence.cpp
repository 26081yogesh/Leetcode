class Solution {
public:
    bool isSubsequence(string s, string t) {
        int one = 0;
        int two = 0;
        while(one < s.size() and two < t.size()){
            if(s[one] == t[two]){
                one++;
            }
            two++;
        }
        cout<<one<<endl<<two;
        if(one < s.size()){
            return false;
        }
        return true;
    }
};