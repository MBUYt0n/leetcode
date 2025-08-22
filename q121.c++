#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int maxProfit(vector<int> &prices)
	{
		int high = 0, low = 0;
		int res = -1;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] >= prices[high])
				high = i;
			else if (prices[i] <= prices[low])
				low = i;
			if (high < low)
				high = low;
			else
				res = prices[high] - prices[low] > res ? prices[high] - prices[low] : res;
		}

		return res;
	}

	int maxProfitKadane(vector<int> &prices)
	{
		int buy = INT_MAX;
		int profit = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			buy = min(buy, prices[i]);
			profit = max(profit, prices[i] - buy);
		}
		return profit;
	}
};

int main()
{
	Solution sol;
	vector<int> prices = {7, 3, 5, 1, 6, 4};
	cout << sol.maxProfitKadane(prices) << endl;
	return 0;
}