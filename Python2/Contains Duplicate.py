class Solution(object):
    def containsDuplicate(self, nums):
        res = False
        nums2 = set(nums)
        if len(nums) != len(nums2):
            return True
        return res
