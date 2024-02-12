class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // O(n2)
        // int profit = 0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j] > prices[i]){
        //             profit = max(profit, prices[j]-prices[i]);
        //         }
        //     }
        // }
        // return profit;

        int start = 0;
        int end = start+1;
        int n = prices.size();
        int profit = 0;
        while(start < n and end < n){
            if(prices[start] > prices[end]){
                start++;
            }
            else{
                profit = max(profit, prices[end]-prices[start]);
                end++;
            }
        }
        return profit;
    }
};