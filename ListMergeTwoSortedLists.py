class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* L = (ListNode *)malloc(sizeof(ListNode));
        L->next = NULL;
        ListNode *p, *q, *r;
        p = l1, q = l2, r = L;
        
        while (p && q)
        {
            if (p->val < q->val)
            {
                l1 = l1->next;
                p->next = r->next;
                r->next = p;
                r = r->next;
                p = l1;
            }
            else
            {
                l2 = l2->next;
                q->next = r->next;
                r->next = q;
                r = r->next;
                q = l2;
            }
        }
        if (p)
            r->next = l1;
        else
            r->next = l2;
            
        r = L;
        L = L->next;
        free(r);
        
        return L;
    }
};
