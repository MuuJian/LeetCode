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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *dummy = new ListNode(0), *curr = dummy;
        while(head)
        {
            ListNode *t = head -> next;
            curr = dummy;
            while(curr -> next != nullptr && curr -> next -> val <= head -> val)
            {
                curr = curr -> next;
            }
            head -> next = curr -> next;
            curr -> next = head;
            head = t;
        }
        return dummy -> next;
    }
};