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
        
        ListNode* temp = new ListNode( (l1->val + l2->val)%10 );
        int carry = (l1->val + l2->val)/10;
        
        l1 = l1->next; l2 = l2->next;
        ListNode* ans = temp;
        
         int su = carry;
        
        while(l1 || l2 || carry){
           
            su = carry;
            if(l1){
                su += l1->val; l1 = l1->next;
            }
            if(l2){
                su += l2->val; l2 = l2->next;
            }
            
            ListNode* t2 = new ListNode(su%10);
            temp->next = t2;
            temp = t2;
            carry = su/10;
            
            //if(carry == su){break;}
            
        }
        
        return ans;
        
    }
};
