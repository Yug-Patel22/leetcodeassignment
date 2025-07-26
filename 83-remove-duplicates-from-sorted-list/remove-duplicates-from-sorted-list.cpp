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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode * t=head->next;
        ListNode * cur=head->next;
        ListNode * pre=head;
        int el=head->val;
        while(t){
            if(t->val!=el){
                cur->val=t->val;
                el=t->val;
                pre=cur;
                cur=cur->next;
            }
            t=t->next;
        }
        pre->next=nullptr;
        return head;
    }
};