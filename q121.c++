#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int maxProfit(vector<int> &prices)
	{
        int curr = prices[0], res = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            curr = max(prices[i], curr + prices[i]);
            res = max(curr, res);
        }

        return res;
	}
};