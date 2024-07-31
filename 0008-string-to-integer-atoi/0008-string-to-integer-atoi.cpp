class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long double ans = 0, j = 0;
        bool check = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && ans == 0) {
                j++;
                continue;
            }
            if (s[i] == ' ' && j==0)
                continue;
            if (s[i] == '-' && ans == 0 && j == 0) {
                j++;
                check = true;
                continue;
            }
            if (s[i] == '+' && ans == 0 && j == 0){
                j++;
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9') {
                j++;
                int value = s[i] - '0';
                if (check == true) {
                    ans = ans * 10 - value;
                } else
                    ans = ans * 10 + value;
            } else
                break;
        }
        if (ans > INT_MAX)
            ans = INT_MAX;
        else if (ans < INT_MIN)
            ans = INT_MIN;
        return ans;
    }
};