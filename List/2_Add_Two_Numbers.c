// one node add one node

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
    L->next = NULL;
    struct ListNode *p, *q;
    q = L;
    int carry = 0, sum = 0;
    
    while (l1 || l2)
    {
        // insert sum
        int v1 = l1 ? l1->val : 0;
        int v2 = l2 ? l2->val : 0;
        sum = carry + v1 + v2;
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->val = sum % 10;
        p->next = q->next;
        q->next = p;
        q = q->next;
        carry = sum / 10;
        
        //move
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    
    // add carry to tail node
    if (carry)
    {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));   
        p->val = carry;
        p->next = q->next;
        q->next = p;
    }
        
    return L->next;
}
