#include <iostream>
#include <vector>

using namespace std;
class Solution
{
  public:
	bool check(vector<int> &nums)
	{
		bool flag = false;
		int last = nums[0];
		for (int num : nums)
		{
			if (num == last)
			{
				continue;
			}
			else if (num >= last)
			{
				last = num;
			}
			else if (flag == false)
			{
				flag = true;
				last = num;
			}
			else
			{
				return false;
			}
		}
		if (nums.front() < nums.back() && flag)
		{
			return false;
		}
		return true;
	}
};

int main()
{
	Solution sol;
	vector<int> nums = {2, 1, 3, 4};
	if (sol.check(nums))
	{
		cout << "The array can be rotated to be non-decreasing." << endl;
	}
	else
	{
		cout << "The array cannot be rotated to be non-decreasing." << endl;
	}
	return 0;
}