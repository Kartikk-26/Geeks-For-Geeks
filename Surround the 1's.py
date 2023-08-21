class Solution:
    def Count(self, matrix):
        count = 0
        n = len(matrix)
        m = len(matrix[0])
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 1:
                    ele_count = 0
                    for dx,dy in [(0,1),(0,-1),(1,0),(-1,0),(1,1),(-1,1),(1,-1),(-1,-1)]:
                           if 0 <= i + dx < n and 0<= j+dy<m and  matrix[i+dx][j+dy] == 0:
                                    ele_count += 1
                    if ele_count % 2 == 0 and ele_count > 0:
                        count += 1
                    
        return count
