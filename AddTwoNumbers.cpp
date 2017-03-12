/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tmp=0, count=0;
        ListNode* h1 = new ListNode(0);
        ListNode* h = h1; 
        while(l1 || l2){
            int a=0,b=0;
            if (l1){
                a = l1->val;
                if (NULL == l1->next)
                    l1 = NULL;
                else
                    l1 = l1->next;
            }
            if (l2){
                b = l2->val;
                if (!l2->next)
                    l2 = NULL;
                else
                    l2 = l2->next;
            }
            tmp = a + b + count;
            count = 0;
            if (tmp>=10){
                count = tmp/10;
                tmp %= 10;
            }
            h1->val = tmp;
            if (l1 || l2){
                h1->next = new ListNode(0);
                h1 = h1->next;
            }
        }
        if(count>0){
            h1->next = new ListNode(count);
        }
        return h;
    }
};