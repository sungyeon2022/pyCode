class Solution(object):
    def isValid(self, s):
        ans = True
        ch = []
        for i in s:
            if i =='(' or i == '{' or i == '[':
                ch.append(i)
            else:
                if not ch:
                    return False
                x = ch.pop()
                if i == ')' and x != '(':
                    return False
                elif i == ']' and x != '[':
                    return False
                elif i == '}' and x != '{':
                    return False
        return len(ch) == 0


