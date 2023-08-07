class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //NAIVE Solution
        // unordered_set<ListNode *>address;
        // ListNode * curr=head;
        // while(curr!=NULL)
        // {
        //     if(address.find(curr)!=address.end())
        //     {
        //         return curr;
        //     }
        //     address.insert(curr);
        //     curr=curr->next;
        // }
        // return NULL;
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *entry=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};