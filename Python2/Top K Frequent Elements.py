class Solution(object):
    def topKFrequent(self, nums, k):
        count = {}
        for i in nums:
            count[i] = 1+count.get(i,0)
        chk = sorted(count.items(), key=lambda x:x[1], reverse=True)
        res = []
        for i in chk:
            res.append(i[0])
            if len(res)==k:
                return res

a=[1,1,1,2,2,3]
b=2
sc = Solution()
sc.topKFrequent(a,b)
