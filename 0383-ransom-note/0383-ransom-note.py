class Solution:
    def canConstruct(self, a: str, b: str) -> bool:
        mp1 = {}

        # Count the occurrences of characters in string b
        for ele in b:
            mp1[ele] = mp1.get(ele, 0) + 1

        # Check if the characters in string a can be constructed from string b
        for ele in a:
            if ele not in mp1 or mp1[ele] == 0:
                return False
            mp1[ele] -= 1

        return True
