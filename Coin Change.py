#User function Template for python3


class Solution:
    def count(self, coins, N, Sum):
        # code here 
        cache=[0 for _ in range(Sum+1)]
        cache[0] = 1
        for coin in coins:
            for i in range(Sum+1):
                
                if i<coin:
                    continue
                cache[i] += cache[i-coin]
                
        #print(cache) 
        return cache[-1]
