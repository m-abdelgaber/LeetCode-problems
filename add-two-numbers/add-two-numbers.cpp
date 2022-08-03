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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cl1 = l1;
        ListNode* cl2 = l2;
        int carry = 0;
        while(cl1 && cl2){
            int sum = cl1->val + cl2->val + carry;
            carry = sum/10;
            sum = sum%10;
            cl1->val = sum;
            if(!cl1->next &&  !cl2->next){
                if(carry==1){
                    cl1->next = new ListNode(carry);
                    carry =0;
                }
                break;
            }
            else if(!cl1->next){
                cl1-> next = cl2->next;
                cl1 = cl1->next;
                break;
            }
            else if(!cl2->next){
                cl1= cl1->next;
                break;
            }
            cl1 = cl1->next;
            cl2 = cl2->next;
        }
        while(carry ==1){
            // cout<< cl1->val<<" "<< carry<<"\n";
            int sum = cl1->val+ carry;
            carry = sum/10;
            sum = sum%10;
            cl1->val = sum;
            if( !cl1->next && carry ==1){
                cl1->next = new ListNode(1);
                carry = 0;
                break;
            }
            cl1 = cl1->next;
        }
       return l1; 
        
    }
};