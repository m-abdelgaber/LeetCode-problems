/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* currA = headA;
        ListNode* currB = headB;
        while(currA){
            currA = currA->next;
            lenA++;
        }
        while (currB){
            currB = currB->next;
            lenB++;
        }
        currA = headA;
        currB = headB;
        if(lenA<lenB){
            for(int i=0; i< lenB-lenA; i++){
                currB = currB->next;
            }
        }
        else if(lenB<lenA){
            for(int i=0; i< lenA-lenB; i++){
                currA = currA->next;
            }
        }
        while(currA->next && currB->next && currA != currB ){
            currA = currA->next;
            currB = currB->next;
        }
        if(currA == currB)
            return currA;
        else
            return NULL;
    }
};