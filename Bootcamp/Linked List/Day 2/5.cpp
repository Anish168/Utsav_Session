class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        {
            return head;
        }
        
        Node* newhead=new Node(0);
        Node* curr=head;
        Node* new_curr=newhead;
        unordered_map<Node*,Node*> umap;    //address store krega old element or new element ka
        
        //linked list ka data copy kr rha hu dusre LL m
        while(curr!=NULL)
        {
            Node* temp= new Node(curr->val);
            umap.insert({curr,temp}); // old element k address ko map kiya new copied elemnt k address k saath cuz random pointer bhi toh same point krega but address alag hoga copied m element ka
            
            new_curr->next=temp;
            new_curr=new_curr->next;
            curr=curr->next;
        }
        
        curr=head;
        new_curr=newhead->next;
        //copied random pointer
        while(curr)
        {
            Node* random=curr->random;
            Node* newRandom=umap[random];
            
            new_curr->random= newRandom;
            new_curr=new_curr->next;
            curr=curr->next;
        }
        return newhead->next;
    }
};