#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        // string temp;
        // for(int i=0;i<s.size();i++){
        //     if(s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9'){
        //         temp += s[i];
        //     }
        // }
        // s = temp;

        // int start = 0;
        // int end = s.size()-1;

        // while(start<end){
        //     swap(s[start++], s[end--]);
        // }
        // cout<<s<<endl<<temp;
        // if(s == temp){
        //     return true;
        // }
        // return false;


        int start = 0;
        int end = s.size()-1;
        while(start < end){
            if(!isalnum(s[start])){
                start++;
            }
            else if(!isalnum(s[end])){
                end--;
            }
            else if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};