class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0;
        int maxSum = 0;
        int r = cardPoints.size() - 1;
        while(l <= k-1){
            maxSum += cardPoints[l];
            l++;
        }
        l--;
        cout<<maxSum<<endl<<l<<endl<<r;
        int sum = maxSum;
        while(l >= 0){
            sum -= cardPoints[l--];
            sum += cardPoints[r--];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};