class Solution:
    def nthRowOfPascalTriangle(self, n):
        MOD = 10**9 + 7
        row = [1]
        for i in range(1, n):
            row.append((row[i-1] * (n-i)) % MOD * pow(i, MOD-2, MOD) % MOD)
        return row
