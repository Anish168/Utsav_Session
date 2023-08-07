/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        // Utsav's bhiya code
        // Node* slow = head;
        // Node* fast = head;
        
        // while(fast != NULL && fast->next != NULL)
        // {
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        
        // Node* prev = NULL;
        // Node* current = slow->next;
        // while(current != NULL)
        // {
        //     Node* n = current->next;
        //     current->next = prev;
        //     prev = current;
        //     current = n;
        // }
        
        // while(head != NULL)
        // {
        //     if(head->data != prev->data)
        //     {
        //         return false;
        //     }
        //     head = head->next;
        //     prev = prev->next;
        // }
        
        // return true;
        
        
        Node* slow = head;
        // Node* fast = head; replace with cuz mai yeh consider kr rhu hi ki jb 
        //even length ki linked list hogi toh mai dono linked list m equal no
        // of nodes dunga na or odd length ki aai toh ek LL m ek extra node dunga
        
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* prev = NULL;
        Node* current = slow->next;
        slow->next = NULL;  //yeh missing tha
        while(current != NULL)
        {
            Node* n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        
        // while(head != NULL) replace with one more condn agar 333 ki Ll given h toh
        //dusri linked list m hum NULL->next ko access kr rhe h which give
        // us segmentation fault. so dono null nhi hona chahiye tb tk hi check kr
        while(head != NULL && prev != NULL)
        {
            if(head->data != prev->data)
            {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        
        return true;
    }
};
