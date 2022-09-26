from collections import deque
class Solution(object):
    def threeSum(self, nums):
        ans = []
        nums.sort()
        for i in range(len(nums)-2):
            r,l = len(nums)-1,i+1
            while r>l:
                res = nums[i]+nums[r]+nums[l]
                if res > 0:
                    r-=1
                elif res<0
                    l+=1
                else:
                    ans.append([nums[i],nums[l],nums[r]])
                    l+=1
                    while nums[l] == nums[l - 1] and l < r: #중복연산 체크** 이해못한 부분
                        l += 1
sc = Solution()
sc.threeSum([1,5,0,0,2,3])