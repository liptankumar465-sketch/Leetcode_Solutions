class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        # Intuition: sort both strings and find first mismatch
        schar = sorted(s)
        tchar = sorted(t)

        i = 0
        while i < len(schar) and schar[i] == tchar[i]:
            i += 1
        return tchar[i]
    
