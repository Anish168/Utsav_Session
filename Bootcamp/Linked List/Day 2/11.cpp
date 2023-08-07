class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int>u;
     Node*curr=head;
     if(curr==NULL)
     {
         return head;
     }
     else
     {
        u.insert(curr->data);
     }
     
     while(curr!=NULL && curr->next!=NULL)
     {
         //check krna h ki next ka data same h ya nhi
         if(u.find(curr->next->data)!=u.end())  //agar map  h toh curr aage bdhega
         {
             //same h
             curr->next=curr->next->next;
         }
         else
         {
             //same nhi h
             u.insert(curr->next->data);    //same nhi h toh phle map m dalo
             curr=curr->next;
         }
     }
     return head;
    }
};