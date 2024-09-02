#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
    public:

    void helper(vector<string> &res, string &digits, string &cur, int index, vector<string> &map){
        if(index == digits.size()){
            res.push_back(cur);
            return;
        }
        string letters = map[digits[index] - '2'];
        for (int i = 0; i < letters.size(); i++){
            cur.push_back(letters[i]);
            helper(res, digits, cur, index + 1, map);
            cur.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> map = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        if(digits.size() == 0){
            return res;
        }
        string cur;
        helper(res, digits, cur, 0, map);
        return res;
    }
};

int main(){
    Solution s;
    vector <string> f = s.letterCombinations("79");
    for (string i : f){
        cout << i << endl;
    }
}