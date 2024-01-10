class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> st;
        for(int i=0;i<m;i++){
            st.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            st.push_back(nums2[i]);
        }
        nums1.clear();
        sort(st.begin(), st.end());
        for(auto i:st){
            nums1.push_back(i);
        }
    }
};