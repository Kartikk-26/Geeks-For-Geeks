class Solution:
    #Function to count the frequency of all elements from 1 to N in the array.
    def frequencyCount(self, arr, N, P):
        # code here
        ref=N+P
        for i in range(N):
            arr[i]=arr[i]*ref
        for i in range(N):
            temp=arr[i]//ref
            if temp<=N:
                arr[temp-1]+=1
        for i in range(N):
            arr[i]=arr[i]%ref
