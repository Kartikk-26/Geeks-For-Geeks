class Solution
{
    public:
    Node *compute(Node *head)
    {
 
        // your code goes here
        if (!head){
            return head;
        }
        Node* a = compute(head->next);
        head->next = a;
        if (!a || a->data <= head->data){
            a = head;
        }
        return a;
}  
};
   
