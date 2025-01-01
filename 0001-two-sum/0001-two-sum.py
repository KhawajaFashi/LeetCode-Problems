class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in mp:
                return [i, mp[complement]]
            mp[num] = i
        return []