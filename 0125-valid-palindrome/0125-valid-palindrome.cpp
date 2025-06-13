class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        string newstr;
        for (char c : s) {
            if (c >= 65 && c <= 90) {
                s[i] += 32;
                newstr += s[i];
            } else if (c >= 97 && c <= 122 || c >= '0' && c <= '9') {
                newstr += c;
            }
            i++;
        }
        for (int i = 0, j = newstr.size() - 1; i <= j; i++, j--) {
            if (newstr[i] != newstr[j])
                return false;
        }
        return true;
    }
};