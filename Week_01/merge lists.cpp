class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
         ListNode *p=new ListNode(0);
         ListNode *q=p;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
               p->next=l1;
               l1=l1->next;
            }
            else
            {
              p->next=l2;
              l2=l2->next;  
            }
             p=p->next;
        }
        p->next=(l1!=NULL)?l1:l2;
        return q->next;
    }
};

