#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int climbStairs(int n)
	{
		vector<int> dp = {-1, 1, 2};
		for (int i = 3; i < n; i++)
		{
            dp.push_back(dp[i - 1] + dp[i - 2]);
		}
        return dp[n - 1];
	}
};

int main()
{
    Solution s;
    int n = 5;
    cout << "Number of ways to climb " << n << " stairs: " << s.climbStairs(n) << endl;
    return 0;
}