/* This question is asked for finding the best time to buy and sell stock.I use O(n) time complexity to sove this problem.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int cur = 0;
        int best = 0;
        int low = prices[0];
        int length = prices.size();
        for(int i = 1;i < length;i++){
            if(prices[i] > low){
                cur = prices[i] - low;
                if(cur > best){
                    best = cur;
                }
            }
            else{
                low = prices[i];
                cur = 0;
            }
        }
        return best;
    }
};
