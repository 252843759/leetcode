// this is first version
// add all nums together will over memory

typedef long long LL;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        LL num1 = NodeToNum(l1);
        LL num2 = NodeToNum(l2);
        LL res = num1 + num2;
        return NumToNode(res);
    }
    LL NodeToNum(ListNode* L)
    {
        LL res = 0;
        LL bit = 1;
        while (L != NULL)
        {
            res += L->val * bit;
            L = L->next;
            bit *= 10;
        }
        
        return res;
    }
    ListNode* NumToNode(LL num)
    {
        ListNode *L, *p, *q;
        L = (ListNode *)malloc(sizeof(ListNode));
        L->next = NULL;
        q = L;
        
        while (num)
        {
            p = new ListNode(num % 10);
            num /= 10;
            // p->next = L;
            // L = p;
            p->next = q->next;
            q->next = p;
            q = p;
        }
        
        q = L;
        L = L->next;
        free(q);
        
        return L;
    }
};
