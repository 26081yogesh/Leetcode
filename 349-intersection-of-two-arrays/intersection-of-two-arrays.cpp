class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Brute Force Approach -> using extra space.
        // vector<int> v(0);
        // map<int, int> ump;
        // int n = nums1.size();
        // int m = nums2.size();
        // for(int i=0;i<n;i++){
        //     ump[nums1[i]]++;
        // }

        
    
        // for(int i=0;i<m;i++){
        //     if(ump.find(nums2[i]) != ump.end()){
        //         v.push_back(nums2[i]);
        //         ump.erase(nums2[i]);
        //     }
        // }
        // for(auto i : ump){
        //     cout<<i.first<<" --> "<<i.second<<endl;
        // }
        // sort(v.begin(), v.end());

        // return v;

        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();

        int one = 0, two = 0;
        while(one < n and two < m){
            if(nums1[one] < nums2[two]){
                one++;
            }
            else if(nums1[one] > nums2[two]){
                two++;
            }
            else{
                if(v.size() == 00 or v.back() != nums1[one]){
                    v.push_back(nums1[one]);
                }
                one++;
                two++;
            }
        }
        return v;
    }
};