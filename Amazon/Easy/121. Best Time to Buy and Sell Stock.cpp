class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int i, profit = 0, mini = prices[0];
            for (i = 0; i < prices.size(); i++)
            {
                mini = min(mini, prices[i]);
                profit = max(profit, prices[i] - mini);
            }

            return profit;
        }
};
