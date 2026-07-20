class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
       
    }
};