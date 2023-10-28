class Solution:
    def is_bleak(self, n):
        
        for i in range(n-30, n):
           # binary = bin(i).count('1')
            if i+bin(i).count('1') == n:
                return 0
        
        
        return 1
