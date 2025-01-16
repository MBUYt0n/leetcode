#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
  public:
	vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
	{
		if (target == 0)
			return {};

		vector<vector<int>> r = combinationSum2(candidates, target - 1);
		vector<int> row;
		for (int i : candidates)
			row.push_back(i);
        r.push_back(row);
		return r;
	}git 
};

int main()
{
	vector<int> c = {2, 3, 5, 1, 0};
	Solution s;
	vector<vector<int>> r = s.combinationSum2(c, 3);
	for (vector<int> i : r)
	{
		for (int j : i)
			cout << j << " ";
		cout << "\n";
	}
}