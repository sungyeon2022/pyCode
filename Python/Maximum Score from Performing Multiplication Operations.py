class Solution:
    def maximumScore(self, nums: list[int], multipliers: list[int]) -> int:
        m = len(multipliers)
        n = len(nums)

        dp0 = [0] * m

        mult = multipliers[-1]
        for l in range(m):
            dp0[l] = max(mult * nums[l], mult * nums[l + n - m])

        dp1 = [0] * (m - 1)
        for index in range(m - 2, -1, -1):
            mult = multipliers[index]
            for l in range(index + 1):
                dp1[l] = max(mult * nums[l] + dp0[l + 1], mult * nums[l + n - (index + 1)] + dp0[l])
            dp0, dp1 = dp1, dp0
        return dp0[0]