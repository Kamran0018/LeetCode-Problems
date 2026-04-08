class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a=NULL;
        ListNode* b=head;
        ListNode* c=NULL;

        while(b !=NULL)
        {
            c=b->next;
            b->next=a;
            a=b;
            b=c;
        }
        return a;


        
    }
};