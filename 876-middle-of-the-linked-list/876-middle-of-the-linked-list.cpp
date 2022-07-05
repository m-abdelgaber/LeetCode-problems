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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* FN = head;
        ListNode* SN = head;
        int counter =0;
        while(FN != nullptr){
            counter +=1;
            if(counter%2 ==0){
                SN = SN->next;
            }
            FN = FN->next;
        }
        return SN;
    }
};