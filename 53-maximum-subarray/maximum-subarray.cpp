class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force -> O(n2)
        // int mx = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         mx = max(mx, sum);
        //     }
        // }
        // return mx;


        // Optimal Approach -> Kadane's algorithm
        int mx = INT_MIN;
        int sum  = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            mx = max(sum, mx);
            if(sum < 0){
                sum = 0;
            }
        }
        return mx;
    }
};