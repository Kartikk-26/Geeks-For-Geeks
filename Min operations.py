class Solution:
    def solve(self, a : int, b : int) -> int:
        # code here
        
        if  a== b:
            return 0
        if a == 0 or b == 0:
            return 1
        x = a&b
        if a == x or b== x:
            return 1
        return 2
