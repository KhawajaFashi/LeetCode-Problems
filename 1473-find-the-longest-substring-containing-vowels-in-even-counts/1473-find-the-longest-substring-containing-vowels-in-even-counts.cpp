class Solution {
public:
    int findTheLongestSubstring(string s) {
        int mask=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                mask = mask^(s[i]-'a'+1);
            }
            if(mp.find(mask)!=mp.end()){
                ans = max(ans,i-mp[mask]);
            }
            else{
                mp[mask] = i;
            }
        }
        
        return ans;
        
    }
};
    // int findTheLongestSubstring(string s) {
    //     int n = s.length();
    //     int maxLen = 0;
    //     map<char, int> mp;
    //     for (int i = 0; i < n; i++) {
    //         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
    //             s[i] == 'u')
    //             mp[s[i]]++;
    //     }
    //     map<char, int> mps = mp;
    //     for (int i = 0; i < n; i++) {
    //         // cout << mp['o'] << "    " << i << endl;
    //         for (int j = n - 1; j >= i; j--) {
    //             if ((mp['a'] % 2 == 0) && (mp['e'] % 2 == 0) &&
    //                 (mp['i'] % 2 == 0) && (mp['o'] % 2 == 0) &&
    //                 (mp['u'] % 2 == 0)) {
    //                 maxLen = max(maxLen, j - i + 1);
    //                 // cout << i << "       " << j << "      " << j - i << endl;
    //             }
    //             mp[s[j]]--;
    //         }
    //         mps[s[i]]--;
    //         mp = mps;
    //     }
    //     return maxLen;
    // }