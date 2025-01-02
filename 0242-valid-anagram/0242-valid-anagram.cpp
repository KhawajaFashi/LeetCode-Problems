class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        if (s.length() != t.length())
            return false;
        for (char c : s)
            mp[c]++;
        for (char c : t) {
            if (mp.count(c) > 0)
                mp[c] -= 1;
            if (mp[c] == 0)
                mp.erase(c);
        }
        if (mp.size())
            return false;
        return true;
    }
};