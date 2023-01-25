// int n = length(head);
//         //edge case
//         if(n == 0)
//         {
//             return NULL;
//         }

        
//         k = k % n ;
//         int loop = n - k;   //5 - 2 -->3
                
//         if(n == 1 || n == loop)
//         {
//             return head;
//         }
//         ListNode* curr = head;
//         ListNode* firstaddress;
//         int j = 0;
//         while(curr!=NULL)
//         {
//             j++;
//             if(j == loop)
//             {
//                 firstaddress = curr->next;
//                 curr->next = NULL;
//                 break;
//             }
//             curr = curr->next;
//         }
        
//         curr = firstaddress;
//         while(curr->next!=NULL)
//         {
//             curr= curr->next;
//         }
        
//         curr->next = head;
//         return firstaddress;

//correct
int n = length(head);
        //edge case
        if(n == 0)
        {
            return NULL;
        }

        
        int loop = k % n ;
        loop = n - loop;   //5 - 2 -->3
                
        if(n == 1 || n == loop)
        {
            return head;
        }
        ListNode* curr = head;
        ListNode* firstaddress;
        int j = 0;
        while(curr!=NULL)
        {
            j++;
            if(j == loop)
            {
                firstaddress = curr->next;
                curr->next = NULL;
                break;
            }
            curr = curr->next;
        }
        
        curr = firstaddress;
        while(curr->next!=NULL)
        {
            curr= curr->next;
        }
        
        curr->next = head;
        return firstaddress;
        