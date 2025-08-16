#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int sum(vector<int> arr)
	{
		int sum = 0;
		for (int i : arr)
		{
			sum += i;
		}
		return sum;
	}
	void helper(vector<vector<int>> &result, int target, int index, vector<int> subarr, vector<int> candidates)
	{
		int x = sum(subarr);
		if (x == target)
		{
			result.push_back(subarr);
			return;
		}
		if (index >= candidates.size() || x > target)
		{
			return;
		}

        subarr.push_back(candidates[index]);
		helper(result, target, index, subarr, candidates);
		subarr.pop_back();
		helper(result, target, index + 1, subarr, candidates);
	}
	vector<vector<int>> combinationSum(vector<int> &candidates, int target)
	{
		vector<vector<int>> result;
		vector<int> subarr;
		helper(result, target, 0, subarr, candidates);
		return result;
	}
};

int main()
{
	Solution s;
	vector<int> candidates = {2, 3, 6, 7};
	int target = 7;
	vector<vector<int>> result = s.combinationSum(candidates, target);
	for (const auto &combination : result)
	{
		for (int num : combination)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}