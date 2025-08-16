#include <iostream>

using namespace std;
class Solution
{
  public:
	double myPow(double x, int n)
	{
        long y = (long) n;
        return smartPow(x, y);
	}
	double smartPow(double x, long n)
	{
		if (n == 0)
			return 1;
		else if (n < 0)
			return 1.0 / smartPow(x, -n);
		else if (n % 2 == 0)
		{
			return smartPow(x * x, n / 2);
		}
		else
		{
			return x * smartPow(x * x, (n - 1) / 2);
		}
	}
};

int main()
{
    Solution s;
    cout << s.myPow(2, 100);
}