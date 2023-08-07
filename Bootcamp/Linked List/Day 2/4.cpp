class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* anshead = new ListNode(0);
        ListNode* curr = anshead;
        ListNode* p = l1;
        ListNode* q = l2;
        int x,y = 0;
        int carry = 0;
        int sum =0;
        while(p!=NULL || q!=NULL)
        {
            if(p!=NULL)
            {
                x = p->val;
            }
            else
            {
                x = 0;
            }
            if(q!=NULL)
            {
                y = q->val;
            }
            else
            {
                y = 0;
            }
            sum = x+y+carry;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            
            if(p!=NULL)
            {
                p = p->next;
            }
            if(q!=NULL)
            {
                q=q->next;  
            }

        }
        if(carry>0)
        {
            curr->next = new ListNode(carry);
        }
        return anshead->next;
    }
};