class Solution(object):
    def groupAnagrams(self, strs):
        res = {}
        chk = []
        for s in strs:
            a="".join(sorted(s))
        print(res)
        return res

a = ["eat","tea","tan","ate","nat","bat"]
sc = Solution()
sc.groupAnagrams(a)