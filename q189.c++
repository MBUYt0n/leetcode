#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	void rotate(vector<int> &nums, int k)
	{
		k = k % nums.size();
		vector<int> temp(k);
		for (int i = 0, j = nums.size() - 1; i < k; i++, j--)
		{
			temp[i] = nums[j];
		}

		for (int i = nums.size() - k; i >= 0; i--)
		{
			nums[i + k] = nums[i];
		}
		for (int i = 0, j = temp.size() - 1; i < k; i++, j--)
		{
			nums[i] = temp[j];
		}
	}
};

int main()
{
	vector<int> nums = {-1, -100, 3, 99};
	int k = 2;
	Solution s;
	s.rotate(nums, k);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}