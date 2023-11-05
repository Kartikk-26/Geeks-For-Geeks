class Solution:
    def topK(self, nums, k):
        #Code here
        freq=[[] for i in range(len(nums) + 1)]
        count={}
        for i in nums:
            count[i] = 1 + count.get(i,0) 
        for i ,c in count.items():
            freq[c].append(i)
        res=[]
        freq= [sorted(sublist, reverse=True) for sublist in freq]

        for i in range(len(freq)-1,0,-1):
            for n in freq[i]:
               res.append(n)
               if len(res) == k:
                    return res
