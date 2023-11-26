class Solution:
    def pattern(self, N):
        # code here
        a=N
        arr=[]
        while N>0:
            arr.append(N)
            N-=5
        
        while N<=a:
            arr.append(N)
            N+=5
        return arr
