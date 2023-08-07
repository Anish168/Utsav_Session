class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
        {
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* n;
        int count = 0;
        while(curr!=NULL && count < k)
        {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
            count++;
        }
        
        if(n != NULL)
        {
            head->next = reverseKGroup(head , k);
        }
        return prev;
    }
};