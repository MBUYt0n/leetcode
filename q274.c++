#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
	int hIndex(vector<int> &citations)
	{
		vector<int> count(citations.size(), 0);
		for (int i = 0; i < citations.size() + 1; i++)
		{
			if (citations[i] > citations.size())
			{
				count[citations.size()]++;
			}
			else
			{
				count[citations[i]]++;
			}
			int total;
			for (int i = citations.size() - 1; i > -1; i--)
			{
				total += count[i];
				if (total > i)
				{
					return i;
				}
			}
		}
		return 0;
	}
};

int main()
{
	vector<int> citations = {3, 0, 6, 1, 5};
	Solution s;
	cout << s.hIndex(citations) << endl;
	return 0;
}