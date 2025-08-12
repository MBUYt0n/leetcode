#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	void sortColors(vector<int> &nums)
	{
		int r = 0, b = 0, c = 0;
		for (int i : nums)
		{
			if (i == 0)
				r += 1;
			else if (i == 1)
				b += 1;
			else
				c += 1;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (r != 0)
			{
				nums[i] = 0;
				r--;
				continue;
			}
			if (b != 0)
			{
				nums[i] = 1;
				b--;
				continue;
			}
			if (c != 0)
			{
				nums[i] = 2;
				c--;
				continue;
			}
			
		}
	}
};

int main()
{
	Solution s;
	vector<int> nums = {2, 0, 2, 1, 1, 0};
	s.sortColors(nums);
	for (int i : nums)
	{
		cout << i << " ";
	}
}