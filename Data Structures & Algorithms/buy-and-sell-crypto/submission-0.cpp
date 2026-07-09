class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() , maxprof = 0 , cost = INT_MAX , profit = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            cost = min(cost , prices[i]);
            profit = max(profit , prices[i] - cost);
            maxprof = max(maxprof , profit);
        }
        return maxprof;
    }
};
