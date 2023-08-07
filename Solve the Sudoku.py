#User function Template for python3

#User function Template for python3

class Solution:
    
    #Function to find a solved Sudoku. 
    def SolveSudoku(self,grid):
        def solve(grid, r0, c0):
            if r0 == 9:
                return True
            if c0 == 9:
                return solve(grid, r0+1, 0)
                
            if grid[r0] [c0] != 0:
                return solve(grid, r0, c0+1)
                
            for v in range(1, 10):
                if self.check(grid,r0,c0,v):
                    grid[r0] [c0] = v
                    if solve(grid, r0, c0+1):
                        return True
                    grid[r0] [c0] = 0
            return False
        return solve(grid, 0, 0)
        
    
    #Function to print grids of the Sudoku.    
    def printGrid(self,arr):
        
        # Your code here
        for i in range(9):
            for j in range(9):
                print(arr[i][j], end=" ")
                
                
    def check(self,arr,r0,c0,v):
        for d in range(9):
            if arr[d][c0] == v or arr[r0][d] == v:
                return False
                
        r0 = r0//3*3
        c0 = c0//3*3
        for r in range(r0, r0+3):
            for c in range(c0, c0+3):
                if grid[r][c] == v:
                    return False
        return True
    
    #Function to print grids of the Sudoku.    
   
        
        # Your code here
