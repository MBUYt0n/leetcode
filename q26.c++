#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
	int removeDuplicates(vector<int> &nums)
	{
		int curr = nums[0], index = 1;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] != curr && nums[i] >= curr)
			{
				if (index == i)
				{
					curr = nums[i];
					index += 1;
				}
				else
				{
					nums[index] += nums[i];
					nums[i] = nums[index] - nums[i];
					nums[index] -= nums[i];
					curr = nums[index];
					index += 1;
				}
			}
		}
		return index;
	}
};

int main()
{
	Solution s;
	vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
	int newLength = s.removeDuplicates(nums);
	cout << "New length: " << newLength << endl;
	for (int i = 0; i < newLength; i++)
	{
		cout << nums[i] << " ";
	}
}
// {1, 2, 3, 4, 5, 2, 4, 1}