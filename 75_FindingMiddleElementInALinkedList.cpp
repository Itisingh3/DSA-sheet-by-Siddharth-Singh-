class Solution{
    private:
    int getlength(Node*head){
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;

        }
        return l;
    }
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
         if(head){
            int len=getlength(head);
            Node* temp=head;
            int m=len/2;
            while(m--){
                temp=temp->next;

            }
          return temp->data;
        }
    }
};
