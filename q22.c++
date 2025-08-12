#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	void helper(vector<string> &res, int left, int right, int n, string s)
	{
		if (s.length() == 2 * n)
		{
			res.push_back(s);
			return;
		}
		if (left < n)
		{
			s.push_back('(');
			helper(res, left + 1, right, n, s);
			s.pop_back();
		}
		if (right < left)
		{
			s.push_back(')');
			helper(res, left, right + 1, n, s);
			s.pop_back();
		}
	}

	vector<string> generateParenthesis(int n)
	{
		vector<string> res;
		helper(res, 0, 0, n, "");
		return res;
	}
};

int main()
{
	Solution s;
	vector<string> res = s.generateParenthesis(3);
	for (string str : res)
	{
		cout << str << endl;
	}
	return 0;
}