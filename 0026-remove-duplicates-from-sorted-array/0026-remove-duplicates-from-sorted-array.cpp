class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=nums[0];
        vector<int> res;
        res.push_back(prev);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev){
                continue;
            }
            prev=nums[i];
            res.push_back(prev);
        }
        for(int i=0;i<res.size();i++)
        nums[i]=res[i];
        return res.size();
    }
};