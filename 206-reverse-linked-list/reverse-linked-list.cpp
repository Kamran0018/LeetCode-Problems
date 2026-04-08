class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>s;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        };
        temp=head;
        while(temp!=NULL)
        {
            temp->val=s.top();
            s.pop();
            temp=temp->next;
        }
        return head;


        
    }
};