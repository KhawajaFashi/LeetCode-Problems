class Solution {
public:
    unsigned long long isPalindrome(unsigned long long firstHalf, bool isodd) {
        unsigned long long res = firstHalf;
        if (isodd)
            res /= 10;
        while (firstHalf > 0) {
            res = res * 10 + (firstHalf % 10);
            firstHalf /= 10;
        }
        return res;
    }
    string nearestPalindromic(string n) {
        vector<unsigned long long> arr;
        int len = n.length();
        bool isodd = (len % 2 != 0);
        int mid = (len % 2 == 0) ? len / 2 : len / 2 + 1;
        unsigned long long firstHalf = stoll(n.substr(0, mid));
        arr.push_back(isPalindrome(firstHalf, isodd));
        arr.push_back(isPalindrome(firstHalf + 1, isodd));
        arr.push_back(isPalindrome(firstHalf - 1, isodd));
        arr.push_back(pow(10, len - 1) - 1);
        arr.push_back(pow(10, len) + 1);
        long long num = stoll(n);
        long long minDiff = LLONG_MAX;
        long long res = LLONG_MAX;

        for (long long element : arr) {
            if (element == num)
                continue;
            long long curDiff = abs(element - num);
            if (curDiff < minDiff) {
                res = element;
                minDiff = curDiff;
            } else if (curDiff == minDiff) {
                res = min(res, element);
            }
        }

        return to_string(res);
    }
};