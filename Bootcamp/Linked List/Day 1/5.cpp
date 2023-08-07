/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* curr=head;
        Node* n;
        Node* prev=NULL;
        while(curr!=NULL)
        {
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
        return head;
    }
    
};
    