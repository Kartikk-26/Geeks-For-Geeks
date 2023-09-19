class Solution:
    
    # Function to find the position of the first set bit in the given number.
    def getFirstSetBit(self, n):
        # Initialize a position variable to store the position of the set bit.
        position = 1

        # Check each bit from right to left.
        while n > 0:
            # If the least significant bit is set (i.e., n is odd), return the position.
            if n & 1:
                return position
            # Right shift n to check the next bit.
            n >>= 1
            position += 1

        # If no set bit is found, return 0.
        return 0
