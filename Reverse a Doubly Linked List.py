
class Solution:
    
    def reverseDLL(self, head):
        while head:
            head.next, head.prev = head.prev, head.next
            if not head.prev:return head
            head=head.prev
