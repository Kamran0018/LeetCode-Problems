class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode* pre=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=slow->next;
        return head;
        

        
    }
};