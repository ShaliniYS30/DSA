//Problem:Best Time to buy and sell Stock
//Platform:Leetcode
//Difficulty:easy
//Language:c++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        vector<int> profits;
        int profit=0;
        int i;
        for(i=1;i<prices.size();i++){
            minPrice = min(minPrice, prices[i]);
            profit=prices[i]-minPrice;
           profits.push_back(profit);
        }
        int maxprofit=0;
        for(i=0;i<profits.size();i++){
            
            maxprofit = max(maxprofit, profits[i]);
 }
        return maxprofit;
    }
};