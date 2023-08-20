class Solution:

	def count(self,arr, n, x):
		# code here
        c = 0
        for i in arr:
            if i == x:
                c = c+1
        return c
