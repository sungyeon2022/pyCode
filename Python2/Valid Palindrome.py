import re
class Solution(object):
    def isPalindrome(self, s):
        str = re.sub(r"[^a-zA-Z0-9]", '',s.lower())
        return s == s[::-1]

a="A man, a plan, a canal: Panama"
sc = Solution()
print(sc.isPalindrome(a))
