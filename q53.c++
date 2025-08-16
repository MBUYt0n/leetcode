#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int maxSubArray(vector<int> &nums)
	{
		int curr = nums[0], res = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			curr = max(nums[i], curr + nums[i]);
			res = max(res, curr);
		}

		return res;
	}
};

int main()
{
	Solution sol;
	vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << endl; // Output: 6
	return 0;
}