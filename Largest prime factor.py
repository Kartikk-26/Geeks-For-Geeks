#User function Template for python3

class Solution:
    def largestPrimeFactor (self, N):
        # Initialize the maximum prime factor as -1
        max_prime = -1
        
        # Divide N by 2 until it becomes odd
        while N % 2 == 0:
            max_prime = 2
            N //= 2
            
        # Now N is odd. We only need to check odd factors up to sqrt(N)
        for i in range(3, int(N**0.5) + 1, 2):
            while N % i == 0:
                max_prime = i
                N //= i
        
         # If N is a prime greater than 2
        if N > 2:
            max_prime = N
            
        return max_prime    
        
    
