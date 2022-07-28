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
    bool hasCycle(ListNode *head) {
        ListNode* fp = head;
        ListNode* sp = head;
        int c=-1;
        while(fp != NULL){
            fp = fp->next;
            if(c%2==0)
                sp = sp->next;
            if(fp == sp)
                return true;
            c++;
        }
        return false;
    }
};