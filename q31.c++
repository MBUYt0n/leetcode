#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
  public:
	void nextPermutation(vector<int> &nums)
	{
		auto j = max_element(nums.begin(), nums.end());
        int i = 0;
        for(; i < nums.size(); i++)
        {
            if (nums[i] == *j)
                break;
        }
        
	}
};

int main()
{
	vector<int> nums = {1, 3, 2};
	Solution s;
	s.nextPermutation(nums);
	for (int i : nums)
	{
		cout << i << "\n";
	}
}