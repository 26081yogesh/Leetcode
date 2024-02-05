class Solution {
public:
    int firstUniqChar(string s) {
        // O(N2)
        // for(int i=0;i<s.size();i++){
        //     bool is = false;
        //     for(int j=0;j<s.size();j++){
        //         if(i == j){
        //             continue;
        //         }
        //         if(s[i] == s[j]){
        //             is = true;
        //             break;
        //         }
        //     }
        //     if(is == false){
        //         return i;
        //     }
        // }
        // return -1;

        // Extra space but TC - O(n)
        // map<char, int> mp;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }

        // for(int i=0;i<mp.size();i++){
        //     cout<<mp[s[i]]<<endl;
        // }

        // string ans;
        // for(int i=0;i<s.size();i++){
        //     if(mp[s[i]] == 1){
        //         cout<<"Hiii"<<endl;
        //         ans = s[i];
        //         break;
        //     }
        // }
        // if(!ans.empty()){
        //     for(int i=0;i<s.size();i++){
        //         if(ans[0] == s[i]){
        //             return i;
        //         }
        //     }
        // }
        // return -1;



        // Using frequency 
        vector<int> frequency(26, 0);
        for(auto i:s){
            frequency[i-'a']++;
        }

        for(int i=0;i<s.size();i++){
            if(frequency[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};