class Solution {
public:
    bool isPalindrome(ListNode* head) {

        stack<int> s;
        ListNode* temp = head;

        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp != NULL)
        {
            if(temp->val != s.top())
                return false;

            s.pop();
            temp = temp->next;
        }

        return true;
    }
};