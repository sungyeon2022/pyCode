class List:
    pass
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        answer = ""
        if strs == []:
            return answer
        else:
            strsCheck = [None] * len(strs)
            for i in range(0, len(list(strs[0]))):
                prefix = ''.join(list(strs[0])[0:(i+1)])
                for j in range(0, len(strs)):
                    strsCheck[j] = strs[j].startswith(prefix)
                if False not in strsCheck:
                    answer = prefix
                else:
                    break
            return answer

    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        prefix = ""
        for i, c in enumerate(strs[0]):
            for word in strs[1:]:
                if i >= len(word):
                    return prefix
                if c != word[i]:
                    return prefix
            prefix += c
        return prefix