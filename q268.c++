#include <iostream>
#include <vector>


using namespace std;

class Solution
{
  public:
	int missingNumber(vector<int> &nums)
	{
		int sum = 0;
		for(int i = 0, j = 1; i < nums.size(); i++, j++)
		{
			sum += j;
			sum -= nums[i];
		}
		return sum;
	}
};

int main()
{
    Solution s;
    vector<int> nums = {3, 0, 1};
    int res = s.missingNumber(nums);
    cout << res << endl; // Output: 2
    return 0;
}