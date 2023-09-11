#User function Template for python3

class Solution:
    def isLucky(self, n): 
        #RETURN True OR False
        k=2
        while(k<=n):
            if(n%k==0):
                return False
            n=n-(n//k)
            k+=1;
        return True
