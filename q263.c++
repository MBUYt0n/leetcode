#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
	int fact(int n, int m)
	{
		int c = n % m;
		while (c == 0)
		{
			n /= m;
			c = n % m;
		}
		return n;
	}

	bool isUgly(int n)
	{
		if (n == 0)
			return false;
		if (n == 1)
			return true;
		vector<int> a = {2, 3, 5};
		for (int i : a)
		{
			n = fact(n, i);
		}
		if (n == 1)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution s;
	int n = 0;
	bool ans = s.isUgly(n);
	cout << ans;
	return 0;
}