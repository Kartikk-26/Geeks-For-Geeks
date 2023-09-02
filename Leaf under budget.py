'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def getCount(self,root,n):
        levelnode=[root]
        lv=1
        count=0
        while levelnode:
            newlevel=[]
            for i in levelnode:
                if i.left:
                    newlevel.append(i.left)
                    if i.right:
                        newlevel.append(i.right)
                elif i.right:
                    newlevel.append(i.right)
                else:
                    if n-lv >= 0:
                        n-=lv
                        count+=1
                    else:
                        return count
            levelnode=newlevel
            lv+=1   
        return count
        
