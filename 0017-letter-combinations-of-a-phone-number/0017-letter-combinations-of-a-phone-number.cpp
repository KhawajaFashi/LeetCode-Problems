class Solution {
public:
    void solve(string digits, string output, int i, string mapi[], vector<string>& res) {
        if (i >= digits.length()) {
            res.push_back(output);
            return;
        }
        int num = digits[i] - '0';
        string value = mapi[num];
        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digits, output, i + 1, mapi, res);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.length() == 0) {
            return res;
        }
        string out = "";
        int i = 0;
        string mapi[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, out, i, mapi, res);
        return res;
    }
};