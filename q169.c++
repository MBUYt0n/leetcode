#include<iostream>
#include<vector>

using namespace std;

class Solution
{
  public:
	int majorityElement(vector<int> &nums)
	{
        int res = 0, freq = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
                res = nums[i];
            if (nums[i] == res)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return res;
	}
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 2, 3};
    cout << "Majority Element: " << sol.majorityElement(nums) << endl; // Output: 3
    return 0;
}