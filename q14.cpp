#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string a = strs[0];
        string b = strs[n - 1];
        for (int i = 0; i < min(a.size(), b.size()); i++)
        {
            if (a[i] != b[i])
            {
                return ans;
            }
            ans += a[i];
        }
        return ans;
    }
};