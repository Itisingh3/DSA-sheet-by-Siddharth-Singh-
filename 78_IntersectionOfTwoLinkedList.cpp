
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)return NULL;
     ListNode* x=headA;
     ListNode* y=headB;
     while(x!=y){
         
         if(x==NULL)x=headB;
         else{x=x->next;}
         if(y==NULL)y=headA;
         else y=y->next;

     }
     return x;
    }
};
