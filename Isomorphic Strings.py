
class Solution:
    
    #Function to check if two strings are isomorphic.
    def areIsomorphic(self,a,b):
        
        
        if len(a)!=len(b): return False
        N = len(a)
        d = {}
        seen = [False] * 26
        for i in range(N):
            if a[i] in d:
                if d[a[i]]!=b[i]:
                    return False
            else:
                if seen[ord(b[i])-97]:
                    return False
                else:
                    seen[ord(b[i])-97] = True
                    d[a[i]] = b[i]
        
        return True
