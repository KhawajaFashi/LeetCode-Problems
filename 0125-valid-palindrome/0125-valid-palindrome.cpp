class Solution {
public:
    char convert(char a) { return (a + 32); }
    string conversion(string s) {
        string res;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = convert(s[i]);
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' ||
                s[i] >= '0' && s[i] <= '9')
                res.push_back(s[i]);
        }
        return res;
    }
    bool isPalindrome(string s) {
        s = conversion(s);
        int n = s.length(), i = 0, j = n - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};