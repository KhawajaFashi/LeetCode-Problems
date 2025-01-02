class Solution:
    def search(self, nums: List[int], target: int) -> int:
        start, end = 0, len(nums) - 1
        while start < end:
            mid = int(start + (end - start) / 2)
            if nums[mid] >= target:
                end = mid
            else:
                start = mid + 1
        if nums[end] == target:
            return end
        return -1
