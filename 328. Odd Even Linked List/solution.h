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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
        {
            return NULL;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* mid = even;
        while(odd && even && even->next && odd->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = mid;
        return head;
    }
};