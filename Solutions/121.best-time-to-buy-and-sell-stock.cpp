/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPri = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPri){
                minPri = prices[i];
            }
            else if(prices[i]-minPri>maxPro){
                maxPro = prices[i]-minPri;
            }
        }
        return maxPro;
    }
};
// @lc code=end

