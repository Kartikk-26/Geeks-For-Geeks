class Solution:
    def rearrange(self, head):
        # Code here
        def reverse(head):
            prev=None
            curr=head
            while curr:
                next=curr.next
                curr.next=prev
                prev=curr
                curr=next
            return prev
        oddHead=head
        evenHead=head.next
        oddCurr=head
        evenCurr=head.next
        while oddCurr and evenCurr and evenCurr.next:
            oddCurr.next=evenCurr.next
            oddCurr=oddCurr.next
            evenCurr.next=oddCurr.next
            evenCurr=evenCurr.next
        evenhead=reverse(evenHead)
        oddCurr.next=evenhead
        return oddCurr
