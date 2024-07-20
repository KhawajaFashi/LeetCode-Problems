class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final;
    int size1 = word1.length(), size2 = word2.length(), i = 0;
    while (i < size1 && i < size2)
    {
        final += word1[i];
        final += word2[i];
        i++;
    }
    for (int k = i; k < size1; k++)
    {
        final += word1[k];
    }
    while (i < size2)
    {
        final += word2[i];
        i++;
    }
    return final;
    }
};