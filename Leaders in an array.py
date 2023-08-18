class Solution:
    #Back-end complete function Template for Python 3
    #code here 
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        li=[]
        li.append(A[-1])
        for i in range(N-2,-1,-1):
            if A[i]>=li[-1]:
                li.append(A[i])
        return li[::-1]
        
