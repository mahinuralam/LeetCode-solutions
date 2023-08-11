class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        ss = ""
        dic = {}
        for ele in s:
            if (ele >= 'a' and ele <= 'z') or (ele >= 'A' and ele <= 'Z') or (ele >= '0' and ele <= '9'):
                if (ele >= 'A' and ele <= 'Z'):
                    ele = chr(ord(ele) + 32)
                ss += ele
                dic[ele] = dic.get(ele, 0) + 1
                            
        rev_ss = ss[::-1]
        
        if len(ss) == 1:
            return True
        
        if ss == rev_ss:
            return True
        
        return False