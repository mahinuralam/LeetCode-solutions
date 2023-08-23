class Solution:
    def containsNearbyDuplicate(self, n: List[int], k: int) -> bool:
        
        pair = []
        
        for i in range(0, len(n)):
            pair.append((n[i], i))
            
        pair.sort()
        
        for i in range(1, len(pair)):
            
            if pair[i-1][0] == pair[i][0] and abs(pair[i-1][1] - pair[i][1]) <= k:
                return True
            
        return False