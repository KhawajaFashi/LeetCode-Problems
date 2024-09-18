class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        string ans = "";
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            res.push_back(to_string(nums[i]));
        }
        sort(begin(res), end(res),
             [](string& s1, string& s2) { return s1 + s2 > s2 + s1; });
        for (int i = 0; i < res.size(); i++) {
            ans += res[i];
        }
        while (ans[0] == '0' && ans.length() > 1)
            ans.erase(0, 1);
        return ans;
    }
};