class Solution:
    def nthFibonacci(self, n : int) -> int:
        # code here
        if(n==0 or n==1):
            return n
        fibo=[0]*(n+1)
        fibo[1]=1
        for i in range(2,n+1):
            fibo[i]=(fibo[i-1]+fibo[i-2])%1000000007
        return fibo[n]    
        
