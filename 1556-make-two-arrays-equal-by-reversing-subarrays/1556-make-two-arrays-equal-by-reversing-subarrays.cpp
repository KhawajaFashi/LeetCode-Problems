class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        if (target.size() > arr.size() || target.size() < arr.size())
            return false;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != target[i])
                return false;
        }
        return true;
    }
};