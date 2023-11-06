class Solution:
    def matrixSum(self, n, m, mat, q, queries):
        from itertools import chain, product
        from functools import lru_cache
        
        @lru_cache(maxsize=None)
        def get_diffs(d):
            return list(chain(
                product([-d], range(-d, d + 1)),
                product(range(-d + 1, d), [-d, d]),
                product([d], range(-d, d + 1))
            ))
        
        def get_neighbor_numbers(d, x, y):
            return [
                mat[x + dx][y + dy]
                for dx, dy in get_diffs(d)
                if 0 <= x + dx < n and 0 <= y + dy < m
            ]
        
        return [sum(get_neighbor_numbers(*q_args)) for q_args in queries]
