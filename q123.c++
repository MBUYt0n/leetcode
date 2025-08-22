#include <climits>
#include <iostream>
#include <vector>

using namespace std;
class Solution
{
  public:
	int maxProfit(vector<int> &prices)
	{
		int buy = prices[0];
		int profit = 0;
		int count = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] > buy)
			{
				profit += prices[i] - buy;
				count++;
			}

			buy = prices[i];
		}
		return profit;
	}
};

int main()
{
	vector<int> prices = {1, 2, 3, 4, 5};
	Solution s;
	cout << s.maxProfit(prices) << endl;
	return 0;
}