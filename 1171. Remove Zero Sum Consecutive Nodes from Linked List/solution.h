/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;    
        ListNode* curr = head;
        unordered_map<int, ListNode*> m{{0, &dummy}};  
        int s = 0;
        while(curr != nullptr)
        {
            s += curr -> val;
            if(m.count(s))
            {   
                curr =  m[s]->next;
                int p = s + curr->val;
                while (p != s) 
                {
                    m.erase(p);
                    curr = curr->next;
                    p += curr->val;
                }
                m[s] -> next = curr -> next;
                
            }
            else
                m[s] = curr;
            
            curr = curr -> next;
        }
        return dummy.next;
}

};