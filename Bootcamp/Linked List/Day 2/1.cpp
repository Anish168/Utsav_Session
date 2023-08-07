class Solution {
public:
    
    ListNode* mid(ListNode* head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        // loop
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    
    ListNode* mergetwosortedll(ListNode *h1, ListNode *h2)
    {
        if (h1 == NULL)
        {
            return h2;
        }
        if (h2 == NULL)
        {
            return h1;
        }

        // recursive
        ListNode *newhead;
        if (h1->val < h2->val)
        {
            newhead = h1;
            newhead->next = mergetwosortedll(h1->next, h2);
        }
        else
        {
            newhead = h2;
            newhead->next = mergetwosortedll(h1, h2->next);
        }
        return newhead;
        }
    
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *m = mid(head);
        ListNode *l1h = head; // linked list1 ka head
        ListNode *l2h = m->next;
        m->next = NULL;

        l1h = sortList(l1h);
        l2h = sortList(l2h);
        ListNode *fans = mergetwosortedll(l1h, l2h);
        return fans;
    }
};