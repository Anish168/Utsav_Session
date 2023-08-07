class Solution {
public:
    int length(ListNode* head)
    {
        int co = 0;
        while(head!=NULL)
        {
            co++;
            head= head->next;
        }
        return co;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = length(headA);
        int b = length(headB);
        int diff = abs(a-b);
        if(a>b)
        {
            while(diff--)
            {
                headA = headA->next;
            }
        }
        else
        {
            while(diff--)
            {
                headB = headB->next;
            }
        }
        
        while(headA!=NULL)
        {
            if(headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};