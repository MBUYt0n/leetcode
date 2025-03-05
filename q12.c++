#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution
{
  public:
	string intToRoman(int num)
	{
		unordered_map<int, string> dict = {{1, "I"},   {4, "IV"},	{5, "V"},	{9, "IX"},	{10, "X"},
										   {40, "XL"}, {50, "L"},	{90, "XC"}, {100, "C"}, {400, "CD"},
										   {500, "D"}, {900, "CM"}, {1000, "M"}};

		string res = "";
		int digit = 0;
		int flag = 0;
		while (num > 0)
		{
			int i = num % 10;
			int base = pow(10, digit);
			if (i == 4 || i == 9)
			{
				res = dict[i * base] + res;
			}
			else
			{
				if (i >= 5)
				{
					flag = 1;
					i -= 5;
				}
				while (i > 0)
				{
					res = dict[base] + res;
					i--;
				}
				if (flag)
				{
					res = dict[5 * base] + res;
					flag = 0;
				}
			}
			num /= 10;
			digit++;
		}
		return res;
	}
};
int main()
{
	int num = 1090;
	Solution sol;
	string res = sol.intToRoman(num);
	cout << res << endl;
	return 0;
}