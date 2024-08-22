class Solution {
public:
    int findComplement(int num) {
        int rem;
        string s;
        while (num != 0) {
            rem = num % 2;
            num /= 2;
            s += !(rem & 1);
        }
        num = 0;
        for (int i = s.length() - 1; i >= 0; i--)
            num = num * 2 + s[i];
        return num;
    }
};