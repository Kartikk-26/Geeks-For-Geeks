class Solution:
    def maxOnes(self, a, n):
        # Your code goes here
        count_one=max_sum=curr_sum=0
        for i in range(n):
            if(a[i]==1):
                count_one+=1
            if(a[i]==0):
                a[i]=1
            else:
                a[i]=-1
            curr_sum+=a[i]
            max_sum=max(max_sum,curr_sum)
            if(curr_sum<0):
                curr_sum=0
        return count_one+max_sum   
