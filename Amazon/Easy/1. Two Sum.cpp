class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = len(nums)
        for i in range(l):
            for j in range(i+1, l):
                if target == nums[i] + nums[j]:
                    return [i, j]
