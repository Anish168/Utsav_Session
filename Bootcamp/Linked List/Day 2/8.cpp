class Solution
{
    public:
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* n;
        while(curr!=NULL)
        {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        head = reverse(head);
        int carry = 1;
        Node* curr = head;
        while(carry>=0)
        {
            curr->data += 1;
            if(curr->data < 10)
            {
                return reverse(head);
            }
            else
            {
                curr->data = 0;
            }
            
            if(curr->next == NULL)
            {
                break;
            }
            else
            {
                curr = curr->next;
            }
            
        }
        curr->next = new Node(1);
        return reverse(head);
        // return head of list after adding one
    }
};