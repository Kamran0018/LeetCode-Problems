class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr !=NULL)
        {
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;


        
    }
};