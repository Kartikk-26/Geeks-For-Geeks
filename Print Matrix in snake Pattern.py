#User function Template for python3

class Solution:
    
    #Function to return list of integers visited in snake pattern in matrix.
    def snakePattern(self, matrix): 
       # code here 
        ans = []
        j =0
        for i in matrix:
            if j%2==0:
               ans.extend(i)
            else:
                ans.extend(i[::-1])
            j+=1
        return ans
