#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
  public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map <int, int> x;
		for (int i = 0; i < nums.size(); i++)
		{
			x[nums[i]] = i;
		}
        int complement;
		for(int i = 0; i < nums.size(); i++)
		{
            complement = target - nums[i];
			if (x.find(complement) != x.end() && x[complement] != i)
				return {i, x[complement]};
		}
		return {};
	}
};

int main()
{
    Solution s;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = s.twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        for (int index : result)
        {
            cout << index << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No two numbers add up to " << target << endl;
    }
}
