class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(--k)
        {
            curr = curr->next;
        }
        fast = curr;
        while(fast->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        swap(slow->val,curr->val);
        return head;
    }
};