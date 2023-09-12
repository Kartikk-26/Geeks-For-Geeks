class Solution:
    def isPerfectNumber(self, N):
        sum=1
        if N==1:
            return 0
        for i in range(2,int(N**(0.5))+1):
            if N%i==0:
                sum+=i+(N//i)
        if sum==N:
            return 1
        return 0
