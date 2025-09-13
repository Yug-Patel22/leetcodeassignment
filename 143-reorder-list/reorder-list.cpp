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
    void reorderList(ListNode* head) {
        if(head || head->next){
            ListNode * t=head->next;
            ListNode * pre=head;
            while(t && t->next){
                ListNode * tail=t;
                ListNode * last=pre;
                while(tail->next){
                    tail=tail->next;;
                    last=last->next;
                }
                last->next=nullptr;
                tail->next=t;
                pre->next=tail;
                pre=t;
                t=t->next;
            }
        }
    }
};