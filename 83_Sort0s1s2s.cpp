class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        if(head==NULL || head->next==NULL)return head;
        Node* zeroHead=new Node(0);
        Node* oneHead=new Node(0);
        Node* twoHead=new Node(0);
        Node* zero=zeroHead,*one =oneHead,*two=twoHead;
        Node* curr=head;
        while(curr!=NULL){
            if(curr->data==0){
                zero->next=curr;
                curr=curr->next;
                zero=zero->next;
            }
            else if(curr->data==1){
                 one->next=curr;
                 curr=curr->next;
                 one=one->next;
            }
            else{
                two->next=curr;
                curr=curr->next;
                two=two->next;
            }
        }
        zero->next=(oneHead->next!=NULL)?(oneHead->next):(twoHead->next);
        one->next=twoHead->next;
        two->next=NULL;
        head=zeroHead->next;
        return head;
    }
};
