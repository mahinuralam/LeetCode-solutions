class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        st = ""
        i = len(a) - 1
        j = len(b) - 1
        carry = 0
        
        while i >= 0 or j >= 0:
            sm = carry
            
            if i >= 0:
                sm += int(a[i]) - int('0')
            
            if j >= 0:
                sm += int(b[j]) - int('0')
            
            
            
            st += str(sm % 2)
            
            carry = sm // 2
            
            i -= 1
            j -= 1
        
        if carry != 0:
            st += str(carry)
        
        return st[::-1]
            