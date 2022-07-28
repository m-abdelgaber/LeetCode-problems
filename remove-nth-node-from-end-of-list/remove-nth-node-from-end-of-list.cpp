/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fp = head;
        ListNode* sp = head;
        int size =0;
        int c = n;
        while(n>=0&& fp){
            fp = fp->next;
            n--;
            size++;
        }
        while(fp){
            fp = fp->next;
            sp = sp->next;
            size++;
        }
        if(size == c){
            ListNode* nxt = head;
            head = head->next;
            delete nxt;
            return head;
        }
            
        ListNode* nxt = sp->next;
        sp->next = sp->next->next;
        delete nxt;
        return head;
    }
};