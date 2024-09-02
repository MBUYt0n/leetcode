#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    bool isValid(string s) {
        vector<char> stack;
        for (char i : s) {
            if (i == '(' || i == '[' || i == '{') {
                stack.push_back(i);
            } else {
                if (stack.empty()) {
                    return false;
                } else if (i == ')' && stack.back() != '(') {
                    return false;
                } else if (i == ']' && stack.back() != '[') {
                    return false;
                } else if (i == '}' && stack.back() != '{') {
                    return false;
                } else {
                    stack.pop_back();
                }
            }
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isValid("()") << endl;
    return 0;
}