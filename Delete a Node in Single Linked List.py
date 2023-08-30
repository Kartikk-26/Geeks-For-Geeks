'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    for i in range(k-2):
        temp=temp.next
    temp.next=temp.next.next
    return head
