class Solution:
    def columnWithMaxZeros(self,arr,N):
        res,maxi = -1,0
        for i in range(N):
            count = 0
            for j in range(N):
                if arr[j][i] == 0:
                    count += 1
            if count > maxi:
                maxi = count
                res = i
        if maxi == 0: return -1
        return res
