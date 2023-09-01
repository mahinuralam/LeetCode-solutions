from typing import List

class Solution:
    def bs(self, dif: int, i: int, v: List[int]):
        l = i
        r = len(v) - 1
        while l <= r:
            mid = l + (r - l) // 2
            if v[mid] == dif:
                return mid + 1  # Adjust to 1-indexed value
            elif v[mid] > dif:
                r = mid - 1
            else:
                l = mid + 1
        return -1
    
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        for i in range(len(numbers)):
            dif = target - numbers[i]
            idx2 = self.bs(dif, i + 1, numbers)  # Pass i + 1 for 1-indexing
            if idx2 != -1:
                return [i + 1, idx2]
