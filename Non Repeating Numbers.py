class Solution:
	def singleNumber(self, nums):
		# Code here
		dic={}
		l=[]
		for i in nums:
		    if i in dic:
		        dic[i] += 1
		    else:
		        dic[i] = 1
		for key,values in dic.items():
		    if values == 1:
		        l.append(key)
		l.sort()       
		return l
