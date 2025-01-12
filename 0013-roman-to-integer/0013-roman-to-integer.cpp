class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        int num = 0;
        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});
        int i = 0;
        while (i < s.length() - 1) {
            if (mp[s[i]] < mp[s[i + 1]]) {
                int number = mp[s[i + 1]] - mp[s[i]];
                num += number;
                i++;
            } else
                num += mp[s[i]];
            i++;
        }
        if (i != s.length())
            num += mp[s[i]];
        return num;
    }
};