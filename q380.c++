#include <iostream>
#include <vector>

using namespace std;

class RandomizedSet
{
  public:
	RandomizedSet()
	{
		vector<int> arr;
	}

	bool insert(int val)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == val)
			{
				return false;
			}
		}
		arr.push_back(val);
		return true;
	}

	bool remove(int val)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == val)
			{
				arr.erase(arr.begin() + i);
				return true;
			}
		}
		return false;
	}

	int getRandom()
	{
		return arr[rand() % arr.size()];
	}
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */