class Solution {
public:
    int myAtoi(string s) {
        long double result = 0;
        bool digit = false, neg = false, sign = false;
        for (char c : s) {
            if ((c == ' ' && !digit)&&!sign)
                continue;
            else if ((c == '+' && !digit) && !sign) {
                sign = true;
                continue;
            } else if (c == '0' && !digit) {
                digit = true;
                continue;
            } else if (c == '-' && !digit && !sign) {
                neg = true;
                sign = true;
                continue;
            }
            else if (!isdigit(c))
                break;
            result = result * 10 + (int(c) - 48);
            digit = true;
        }
        if (neg)
            result = -result;
        result = result > INT_MAX ? INT_MAX : result;
        result = result < INT_MIN ? INT_MIN : result;
        return int(result);
    }
};