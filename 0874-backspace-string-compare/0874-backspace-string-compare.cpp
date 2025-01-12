class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        for (int i = 0; i < s_len; i++) {
            if (s[i] == '#' && s.length() > s_len) {
                s.pop_back();
                continue;
            } else if (s[i] != '#')
                s += s[i];
        }
        s = s.substr(s_len, s.length());
        for (int i = 0; i < t_len; i++) {
            if (t[i] == '#' && t.length() > t_len) {
                t.pop_back();
                continue;
            } else if (t[i] != '#')
                t += t[i];
        }
        t = t.substr(t_len, t.length());
        return t == s;
    }
};