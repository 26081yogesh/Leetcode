class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> standard = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"}, // Fixed the misplaced curly brace here
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {8, "VIII"},
            {7, "VII"},
            {6, "VI"},
            {5, "V"},
            {4, "IV"},
            {3, "III"},
            {2, "II"},
            {1, "I"}
        };
        string ans = "";
        for(int i=0;i<standard.size();i++){
            while(num >= standard[i].first){
                ans += standard[i].second;
                num -= standard[i].first;
            }
        }
        return ans;
    }
};
