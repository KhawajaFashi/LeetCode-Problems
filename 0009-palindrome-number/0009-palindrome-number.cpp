class Solution {
public:
    bool isPalindrome(int x) {
        string arr = to_string(x);
        for (int i = 0, j = arr.length() - 1; i < j; i++) {
            if (arr[i] != arr[j])
                return false;
            j--;
        }
        return true;
    }
};