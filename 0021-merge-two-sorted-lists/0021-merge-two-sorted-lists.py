# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        # check for edge cases
        # traverse the two lists with 2 pointers
        # edit connections as you go
        # if some edge hasn't terminated at the end link to it
        
        if(list1 == None):
            return list2
        if(list2 == None):
            return list1
        mergedHead = ListNode()
        mergedTail = mergedHead
        
        list1Pointer = list1
        list2Pointer = list2
        
        while(list1Pointer != None and list2Pointer != None):
            if(list1Pointer.val<= list2Pointer.val):
                mergedTail.next = list1Pointer
                mergedTail = mergedTail.next
                list1Pointer = list1Pointer.next
            else:
                mergedTail.next = list2Pointer
                mergedTail = mergedTail.next
                list2Pointer = list2Pointer.next
        if(list1Pointer !=None):
            mergedTail.next = list1Pointer
        elif(list2Pointer !=None):
            mergedTail.next = list2Pointer
        mergedHead = mergedHead.next
        return mergedHead
        