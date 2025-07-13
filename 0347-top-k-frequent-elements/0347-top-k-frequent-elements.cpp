class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> maxHeap;
        unordered_map<int, int> freq;
        for (int num : nums)
            freq[num]++;
        for (auto& [num, count] : freq)
            maxHeap.push({count, num});
        vector<int> res;
        while (k--) {
            res.push_back((maxHeap.top()).second);
            maxHeap.pop();
        }
        return res;
    }
};