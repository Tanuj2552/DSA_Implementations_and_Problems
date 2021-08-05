class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        long long len = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            len++;
        }
        
        if(len == n){return head->next;}
        
        temp = head;
        long long k = len-n-1;
        while(k--){temp = temp->next;}
        temp->next = temp->next->next;
        
        return head;
        
    }
};
