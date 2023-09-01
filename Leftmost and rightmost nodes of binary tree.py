'''
class Node:
    def _init_(self,val):
        self.data=val
        self.left=None
        self.right=None
'''

def printCorner(root):
    if not root:return[]
    res= []
    q = []
    q.append(root)
    while q:
        a = []
        le = len(q)
        for i in range(le):
            k = q.pop(0)
            a.append(k.data)
            if k.left:q.append(k.left)
            if k.right:q.append(k.right)
        res.append(a[0])
        if len(a)>1:res.append(a[-1])
    for i in res:
        print(i,end=" ")
                
    
    
    # print corner data, no need to print new line
    # code here

