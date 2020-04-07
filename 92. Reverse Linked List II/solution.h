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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(0), *pre = dummy;
        dummy -> next = head;
        for(int i = 0; i < m - 1; ++i)
            pre = pre -> next;
        ListNode * curr = pre -> next, *Next;
        for(int i = 0; i < n - m; ++i)
        {
            Next = curr -> next;
            curr -> next = Next -> next;
            Next -> next = pre -> next;
            pre -> next = Next;
        }
        return dummy -> next;
    }
};