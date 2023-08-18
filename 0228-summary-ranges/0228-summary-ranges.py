class Solution:
    def summaryRanges(self, n: List[int]) -> List[str]:
        if not n:
            return []
    
        ans = []
        first = n[0]
        second = n[0]

        for i in range(1, len(n)):
            dif = n[i] - n[i-1]

            if dif == 1:
                second = n[i]
            else:
                if first != second:
                    ans.append(f"{first}->{second}")
                else:
                    ans.append(f"{first}")
                first = n[i]
                second = n[i]

        # Handle the last range
        if first != second:
            ans.append(f"{first}->{second}")
        else:
            ans.append(f"{first}")

        return ans