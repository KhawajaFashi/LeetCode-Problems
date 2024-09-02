class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        unsigned long long int sum = 0;
        for (int s : chalk) {
            sum += s;
        }
        int rem = k % sum, i;
        for (i = 0; rem >= chalk[i]; i++) {
            rem -= chalk[i];
        }
        return i;
    }
};