#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	void nextPermutation(vector<int> &nums)
	{
		int pivot = -1;
		for (int i = nums.size() - 2; i >= 0; i--)
		{
			if (nums[i] < nums[i + 1])
			{
				pivot = i;
				break;
			}
		}
		int swap = pivot + 1;
		if (pivot == -1)
		{
			swap = nums.size() - 1;
			pivot = 0;
			while (pivot < swap)
			{
				nums[swap] += nums[pivot];
				nums[pivot] = nums[swap] - nums[pivot];
				nums[swap] -= nums[pivot];
				pivot++;
				swap--;
			}
			return;
		}

		for (int i = swap + 1; i < nums.size(); i++)
		{
			if (nums[i] < nums[swap])
			{
				swap = i;
			}
		}
		nums[swap] += nums[pivot];
		nums[pivot] = nums[swap] - nums[pivot];
		nums[swap] -= nums[pivot];
		pivot++;
		// swap--;
		while (pivot < swap)
		{
			nums[swap] += nums[pivot];
			nums[pivot] = nums[swap] - nums[pivot];
			nums[swap] -= nums[pivot];
			pivot++;
			swap--;
		}
	}
};

int main()
{
	vector<int> nums = {2, 3, 1};
	Solution s;
	s.nextPermutation(nums);
	for (int i : nums)
	{
		cout << i << "\n";
	}
}