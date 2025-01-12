class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int s_len = s.length();
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#' && i != 0 && s.length() > s_len) {
                s.pop_back();
                continue;
            } else if (t[i] == '#')
                continue;
            s += t[i];
        }
        t.clear();
        for (int i = s_len; i < s.length(); i++)
            t += s[i];
        int t_len = t.length();
        for (int i = 0; i < s_len; i++) {
            if (s[i] == '#' && i != 0 && t.length() > t_len) {
                t.pop_back();
                continue;
            } else if (s[i] == '#')
                continue;
            t += s[i];
        }
        s.clear();
        for (int i = t_len; i < t.length(); i++)
            s += t[i];
        for (int i = t.length() - t_len; i > 0; i--)
            t.pop_back();
        return t == s;
    }
};