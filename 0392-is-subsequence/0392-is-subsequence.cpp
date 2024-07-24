class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, count = -1;
        if (s.length() == 0)
            return true;
        if (s.length() == 1&&t.length()==1) {
            if (s[i] == t[j])
                return true;
            return false;
        }
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            if (i == s.length())
                return true;
            j++;
        }
        return false;
    }
};