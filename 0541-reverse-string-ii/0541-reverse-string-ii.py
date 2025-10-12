class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        a = list(s)
        n = len(a)
        
        start = 0
        while start < n:
            end = min(start + k, n) 
            
            left, right = start, end - 1
            while left < right:
                a[left], a[right] = a[right], a[left]
                left += 1
                right -= 1
            
            start += 2 * k
            
        return "".join(a)