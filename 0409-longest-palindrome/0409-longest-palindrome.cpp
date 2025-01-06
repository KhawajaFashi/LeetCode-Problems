class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int odd_count = 0;
        for (auto c : s)
        {
            mp[c]++;
            if (mp[c] % 2 == 1)
                odd_count++;
            else
                odd_count--;
        }
        if (odd_count > 1)
            return s.length() - odd_count + 1;

        return s.length();
        // map<char, int> mp;
        // int count = 0;
        // bool check = false;        
        // for (auto c : s) 
        //     mp[c]++;
        // for (auto c : s) {
        //     if (mp[c] % 2 == 0){
        //         count++;
        //     }
        //     else if (mp[c] > 2) {
        //         count++;
        //         if (check)
        //             count--;
        //         check = true;
        //         mp[c]--;
        //     } else if (mp[c] == 1 && !check) {
        //         count++;
        //         check = true;
        //     }
        // }
        // return count;
    }
};