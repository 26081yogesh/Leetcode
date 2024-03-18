#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string temp;
        cout<<s<<endl<<endl;
        cout<<temp<<endl<<endl;
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9'){
                temp += s[i];
            }
        }
        s = temp;

        int start = 0;
        int end = s.size()-1;

        while(start<end){
            swap(s[start++], s[end--]);
        }
        cout<<s<<endl<<temp;
        if(s == temp){
            return true;
        }
        return false;
    }
};