#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class RandomizedSet
{
  public:
	unordered_map<int, int> mp;
	RandomizedSet()
	{
		ios_base::sync_with_stdio(false);
	}

	bool insert(int val)
	{
		return mp.insert({val, 0}).second;
	}

	bool remove(int val)
	{
		return mp.erase(val);
	}

	int getRandom()
	{
		return next(mp.begin(), rand() % mp.size())->first;
	}
};

int main()
{
	RandomizedSet *obj = new RandomizedSet();
	cout << obj->insert(1) << endl;
	cout << obj->remove(2) << endl;
	cout << obj->insert(2) << endl;
	cout << obj->getRandom() << endl;
	cout << obj->remove(1) << endl;
	cout << obj->insert(2) << endl;
	cout << obj->getRandom() << endl;
	return 0;
}