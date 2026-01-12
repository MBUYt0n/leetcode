#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
	void setZeroes(vector<vector<int>> &matrix)
	{
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix[0].size(); j++)
			{
				if (matrix[i][j] == 0)
				{
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
			}
		}

		for (int i = 0; i < matrix.size(); i++)
		{
			if (matrix[i][0] == 0)
			{
				for (int j = 0; j < matrix[i].size(); j++)
				{
					matrix[i][j] = 0;
				}
			}
		}

		for (int j = 0; j < matrix.size(); j++)
		{
			if (matrix[0][j] == 0)
			{
				for (int i = 0; j < matrix[0].size(); i++)
				{
					matrix[i][j] = 0;
				}
			}
		}
	}
};

int main()
{
	vector<vector<int>> a = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
	Solution s;
	s.setZeroes(a);
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
			cout << a[i][j];
		cout << "\n";
	}
}