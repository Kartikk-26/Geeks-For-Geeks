class Solution:
    
    #Function to check if Kth bit is set or not.
    def checkKthBit(self, n,k):
        if (n & (1 << k)) != 0:
            return True
        return False
