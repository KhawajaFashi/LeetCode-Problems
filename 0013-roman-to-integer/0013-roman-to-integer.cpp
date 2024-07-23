class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (i < len - 1 && s[i + 1] == 'V')
        {
            if (s[i] == 'I')
            {
                ans += 4;
                i++;
                continue;
            }
        }
        if (i < len - 1 && s[i + 1] == 'X')
        {
            if (s[i] == 'I')
            {
                ans += 9;
                i++;
                continue;
            }
        }
        if (i < len - 1 && s[i + 1] == 'L')
        {
            if (s[i] == 'X')
            {
                ans += 40;
                i++;
                continue;
            }
        }
        if (i < len - 1 && s[i + 1] == 'C')
        {
            if (s[i] == 'X')
            {
                ans += 90;
                i++;
                continue;
            }
        }
        if (i < len - 1 && s[i + 1] == 'D')
        {
            if (s[i] == 'C')
            {
                ans += 400;
                i++;
                continue;
            }
        }
        if (i < len - 1 && s[i + 1] == 'M')
        {
            if (s[i] == 'C')
            {
                ans += 900;
                i++;
                continue;
            }
        }
        switch (s[i])
        {
        case 'I':
            ans += 1;
            break;
        case 'V':
            ans += 5;
            break;
        case 'X':
            ans += 10;
            break;
        case 'L':
            ans += 50;
            break;
        case 'C':
            ans += 100;
            break;
        case 'D':
            ans += 500;
            break;
        case 'M':
            ans += 1000;
            break;
        }
    }
    return ans;
    }
};