from collections import Counter
class Solution:
    def duplicates(self, arr, n):
        count_num = Counter(arr)
        duplicates = [key for key, count in count_num.items() if count > 1]
        duplicates.sort()
        return duplicates if duplicates else [-1]
        # code here
