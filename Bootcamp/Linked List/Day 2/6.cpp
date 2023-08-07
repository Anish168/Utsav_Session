class Solution {
public:
    // int length(ListNode* head)
    // {
    //     int count = 0;
    //     while(head!=NULL)
    //     {
    //         count++;
    //         head = head->next;
    //     }
    //     return count;
    // }

    
    ListNode* rotateRight(ListNode* head, int k) {
        
        int n = length(head);
        //edge cases
        if(n==0)
        {
            return NULL;
        }

        int k = k % n;
        loop = n - k; 
        
        if(n == 1 || loop == n)
        {
            return head;
        }
        int j = 0;
        ListNode* temp = head;
        ListNode* firstaddress;
        while(temp!=NULL)
        {
            j++;
            if(j == loop)
            {
                firstaddress = temp->next;
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        temp = firstaddress;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
        return firstaddress;
    }
};