class Solution:
    def longestKSubstr(self, s: str, k: int) -> int:
        cnt = {}
        i = 0
        n = len(s)
        c = 0
        out = -1
        for j in range(n):
            if cnt.get(s[j], 0) == 0:
                c += 1
            cnt[s[j]] = cnt.get(s[j], 0) + 1
            while c > k and i < j:
                cnt[s[i]] -= 1
                if cnt[s[i]] == 0:
                    c -= 1
                i += 1
            if c == k:
                out = max(out, j - i + 1)
        return out
