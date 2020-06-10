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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        auto length = [](ListNode* head) -> int
        {
            int cnt = 0;
            while(head != nullptr)
            {
                ++cnt;
                head = head -> next;
            }
            return cnt;
        };
        int lenA = length(headA), lenB = length(headB);
        if(lenA < lenB)
        {
            for(int i = 0; i < lenB - lenA; ++i) headB = headB -> next;
        }
        else
        {
            for(int i = 0; i < lenA - lenB; ++i) headA = headA -> next;
        }
        while(headA != nullptr && headB != nullptr && headA != headB)
        {
            headA = headA -> next;
            headB = headB -> next;
        }
        return (headA != nullptr && headB != nullptr) ? headA : nullptr;
    }
};