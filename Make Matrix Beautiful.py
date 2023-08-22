class Solution:
    def findMinOpeartion(self, matrix, n):
        # Code here
        rm = max(sum(r) for r in matrix)
        cm = 0
        for i in range(n):
            cs = 0
            for r in range(n):
                cs += matrix[r][i]
            cm = max(cm, cs)
        return max(rm, cm)*n - sum(sum(r) for r in matrix)
