// This question is asked to make a sum of the best stock buy in and sold out point, trivial.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int totalProfit = 0;
        int lowPoint = prices[0];
        int highPoint = lowPoint;
        int length = prices.size();
        for(int i = 1;i < length; ++i){
            if(prices[i] >= highPoint){
                highPoint = prices[i];
            }
            else{
                totalProfit += highPoint - lowPoint;
                lowPoint = prices[i];
                highPoint = prices[i];
            }
        }
        totalProfit += highPoint - lowPoint;
        return totalProfit;
        
    }
};
