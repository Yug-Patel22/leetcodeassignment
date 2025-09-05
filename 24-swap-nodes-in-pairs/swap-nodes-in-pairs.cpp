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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode * t=head->next;
        ListNode * pre1=head;
        ListNode * pre2=nullptr;
        while(t){
            pre1->next=t->next;
            t->next=pre1;
            if(pre2) pre2->next=t;
            else head=t;
            ListNode * temp=t;
            t=pre1;
            pre1=temp;
            pre1=t;
            t=t->next;
            if(!t) break;
            pre2=pre1;
            pre1=t;
            t=t->next;
        }
        return head;
    }
};