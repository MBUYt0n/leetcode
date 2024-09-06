#include <iostream>
#include <vector>

using namespace std;
class Solution
{
  public:
	int maxProfit(vector<int> &prices)
	{
        int total = 0;
		int profit = 0;
		int buy = prices[0];
		for (int i = 0; i < prices.size(); i++)
		{
            if (prices[i] < buy){
                buy = prices[i];
                total += profit;
                profit = 0;
			}
			else if (prices[i] - buy >= profit){
                profit = prices[i] - buy;
            }
		}
        total += profit;
        return total;
	}
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution s;
    cout << s.maxProfit(prices) << endl;
    return 0;
}