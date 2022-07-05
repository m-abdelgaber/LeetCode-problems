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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr)
            return list1;
        ListNode* CN1 = list1;
        ListNode* CN2 = list2;
        ListNode* res = new ListNode();
        ListNode* resCN = res;
        while (CN1 != nullptr and CN2 != nullptr){
            if(CN1->val < CN2->val){
                resCN->val = CN1->val;
                resCN->next = new ListNode();
                resCN = resCN->next;
                CN1 = CN1->next;
            }
            else{
                resCN->val = CN2->val;
                resCN->next = new ListNode();
                resCN = resCN->next;
                CN2 = CN2->next;
            }
        }
        while(CN1!= nullptr){
            resCN->val = CN1->val;
            if(CN1->next != nullptr){
                resCN->next = new ListNode();    
                resCN = resCN->next;
            }
            CN1 = CN1->next;

        }
        while(CN2!= nullptr){
            resCN->val = CN2->val;
            
            if(CN2->next != nullptr){
                resCN->next = new ListNode();    
                resCN = resCN->next;
            }
            CN2 = CN2->next;
        }
        return res;
    }
};