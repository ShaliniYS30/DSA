//Problem:Best Time to buy and sell Stock_02
//Platform:Leetcode
//Difficulty:medium
//Language:c++
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice=prices[0];
        vector<int> profits;
        int profit=0;
        int i;
        for(i=1;i<prices.size();i++){
            
            if (prices[i] > prices[i-1]){
                profit=prices[i]-prices[i-1];
           profits.push_back(profit);
        }
        }
        int maxprofit=0;
        for(i=0;i<profits.size();i++){
           
            maxprofit+= profits[i];
           }
            
 
        return maxprofit;
    
    }
};