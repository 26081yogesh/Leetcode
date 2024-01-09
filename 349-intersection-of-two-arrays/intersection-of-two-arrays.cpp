class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(0);
        map<int, int> ump;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            ump[nums1[i]]++;
        }

        
    
        for(int i=0;i<m;i++){
            if(ump.find(nums2[i]) != ump.end()){
                v.push_back(nums2[i]);
                ump.erase(nums2[i]);
            }
        }
        for(auto i : ump){
            cout<<i.first<<" --> "<<i.second<<endl;
        }
        sort(v.begin(), v.end());

        return v;
    }
};