#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int j = 0;
        int i = 0;
        while (j < s.size())
        {
            if (p[i] == '.')
            {
                i++;
                j++;
            }
            else if (p[i] == '*')
            {
                if (p[i - 1] == '.')
                {
                    j++;
                }
                else
                {
                    while (s[j] == p[i - 1] && j < s.size())
                    {
                        j++;
                    }
                    // j++;
                    i++;
                }
            }
            else if (s[j] == p[i])
            {
                i++;
                j++;
            }
            else
            {
                if (p[i + 1] == '*')
                {
                    i++;
                    j++;
                }
                else
                {
                    cout << s[j] << s[j + 1] << endl
                         << p[i] << p[i + 3] << endl;
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isMatch("mississippi", "mis*is*p*.") << endl;
    return 0;
}