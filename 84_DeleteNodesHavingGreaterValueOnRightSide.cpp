class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head==NULL or head->next==NULL)return head;
        Node* next=compute(head->next);
        if(!next)return head;
        if(head->data<next->data){
            head=next;
        }
        else{
            head->next=next;
        }
        return head;
    }
    
};
