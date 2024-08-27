class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stack; // to store character and its count

        for (char c : s) {
            if (!stack.empty() && stack.back().first == c) 
                stack.back().second++;
             else 
                stack.push_back({c, 1});
            if (stack.back().second == k) 
                stack.pop_back(); // remove if we hit k consecutive duplicates
        }
        string result = "";
        for (auto p : stack)
            result.append(p.second, p.first); // reconstruct the string

        return result;
    }
};