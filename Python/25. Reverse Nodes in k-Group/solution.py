class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseKGroup(self, head, k):
        if not head or k == 1:
            return head
        
        length = 0
        curr = head
        while curr:
            length += 1
            curr = curr.next
        
        dummy = ListNode(0)
        dummy.next = head
        prev_group_end = dummy
        
        while length >= k:
            group_start = prev_group_end.next
            group_end = group_start
            for _ in range(k - 1):
                group_end = group_end.next
            
            next_group_start = group_end.next
            
            prev, curr = None, group_start
            while curr != next_group_start:
                next_node = curr.next
                curr.next = prev
                prev = curr
                curr = next_node
            
            prev_group_end.next = prev
            group_start.next = next_group_start
            
            prev_group_end = group_start
            length -= k
        
        return dummy.next