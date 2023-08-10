#User function Template for python3

class Solution:
    
    #Function to find the length of longest common subsequence in two strings.
    def lcs(self,x,y,s1,s2):
        
        # code here
        m =len(s1)
        n =len(s2)
        
        #create a table dp table for length
        dp=[[0]*(y+1)for z in range(x+1)]
        
        for i in range(x):
            for j in range(y):
                if s1[i]==s2[j]:
                   dp[i+1][j+1]= dp[i][j]+1
                else:
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j])
                
        return dp[-1][-1]        
                    
