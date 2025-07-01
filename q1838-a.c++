#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<vector<int>> countFrequencies(vector<int> &nums)
	{
		vector<vector<int>> x;
		map<int, int> kvmap;
		int index;
		for (int num : nums)
		{
			if (kvmap.find(num) != kvmap.end())
			{
				kvmap[num] += 1;
			}
			else
			{
				kvmap[num] = 1;
			}
		}
		for (const auto &[key, value] : kvmap)
		{
			x.push_back(vector<int>{key, value});
		}
		return x;
	}
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    vector<vector<int>> result = s.countFrequencies(nums);
    for (const auto &pair : result)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }
    return 0;
}