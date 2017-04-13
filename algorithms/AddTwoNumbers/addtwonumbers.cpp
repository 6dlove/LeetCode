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
        ListNode* res;
        ListNode** cur = &res;
        int c = 0; // carry
        while (l1 != NULL || l2 != NULL || c != 0)
        {
            int sum = ((l1 == NULL) ? 0 : l1->val) + ((l2 == NULL) ? 0 : l2->val) + c;
            
            (*cur) = new ListNode(sum % 10);
            c = sum / 10;
            cur = &((*cur)->next);
            l1 = (l1 == NULL) ? l1 : l1->next;
            l2 = (l2 == NULL) ? l2 : l2->next;
        }
        return res;
    }
};