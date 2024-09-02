class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        unsigned long long int sum = 0;
        for (int s : chalk) {
            sum += s;
        }
        int remaining = k % sum, StudentIndex;
        for (StudentIndex = 0; remaining >= chalk[StudentIndex]; StudentIndex++) {
            remaining -= chalk[StudentIndex];
        }
        return StudentIndex;
    }
};