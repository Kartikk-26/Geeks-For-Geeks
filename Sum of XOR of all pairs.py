class Solution:
    def sumXOR (self, arr, n) : 
        #Complete the function
        ans = 0
        for i in range(32):
            ones = 0
            for x in arr:
                ones += (1 if (x & (1 << i)) else 0)
            ans += (ones * (n - ones) * (1 << i))
        return ans
    
