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
    ListNode* sortList(ListNode* head) {
        multiset<int>s;
        ListNode * t=head;
        while(t){
            s.insert(t->val);
            t=t->next;
        }
        t=head;
        for(int i:s){
            t->val=i;
            t=t->next;
        }
        return head;
    }
};