Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node*newHead=removeDuplicates(head->next);
    if(head->data==newHead->data)
    {
        return newHead;
    }
    else
    {
        head->next=newHead;
        return head;
    }
    
}