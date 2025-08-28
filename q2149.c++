#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
  public:
	vector<int> rearrangeArrayQueue(vector<int> &nums)
	{
        queue<int> q;
        int idx = 0;
        int sign = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] * sign < 0)
            {
                q.push(nums[i]);
            }
            else
            {
                nums[idx] = nums[i];
                idx++;
                sign *= -1;
                if (q.size() > 0)
                {
                    nums[idx] = q.front();
                    q.pop();
                    idx++;
                    sign *= -1;
                }
            }
        }

        return nums;
	}

	vector<int> rearrangeArray(vector<int> &nums)
    {
        int pos = 0, neg = 1;
        int n = nums.size();
        vector<int> res; 
        for (int i = 0; i < n; i++)
        {
            res.push_back(0);
        }

        for(int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                res[pos] = nums[i];
                pos = pos + 2 > n - 1 ? pos + 1 : pos + 2;
            }
            else
            {
                res[neg] = nums[i];
				neg = neg + 2 > n - 1 ? neg + 1 : neg + 2;
			}
		}
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, -4, -5, 6};
    vector<int> result = sol.rearrangeArray(nums);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}