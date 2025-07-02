#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	void moveZeroes(vector<int> &nums)
	{
		int count = 0;
		int index = 0;
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i] != 0)
			{
				nums[index] = nums[i];
				index++;
			}
		}
		for(int i = index; i < nums.size(); i++)
		{
			nums[i] = 0;
		}  
	}
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}