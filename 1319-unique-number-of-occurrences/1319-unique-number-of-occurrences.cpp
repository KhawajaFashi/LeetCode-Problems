class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> arr1;
    arr1.push_back(1);
    for (int i = 1, k = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            arr1.push_back(1);
            k++;
        }
        else
        {
            arr1[k] = arr1[k] + 1;
        }
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr1[j])
                return false;
        }
    }
    return true;
    }
};