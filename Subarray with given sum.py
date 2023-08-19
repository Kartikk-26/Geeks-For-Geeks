#User function Template for python3

#Function to find a continuous sub-array which adds up to a given number.
class Solution:
    def subArraySum(self,arr, n, s): 
       #Write your code here
        i=0
        j=0
        sum=0
        if s==0:
            return [-1]
        while j<n:
            sum+=arr[j]
            if sum>s:
                while sum>s:
                    sum-=arr[i]
                    i+=1
            if sum==s:
                return (i+1,j+1)
            j+=1
        return [-1]
