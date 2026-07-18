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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* s1=head;
        ListNode* s2=head;
        for(int i=0;i<n;i++)
        {
            s1=s1->next;
        }
        if(s1==NULL)
        {
            return head->next;
        }
        while(s1->next!= NULL)
        {
            s1=s1->next;
            s2=s2->next;
        }
        s2->next=s2->next->next;
        return head;

        
    }
};