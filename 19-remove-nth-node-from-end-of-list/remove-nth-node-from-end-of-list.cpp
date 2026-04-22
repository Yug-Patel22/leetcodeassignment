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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode * t=head;
        if(!head || !head->next)return nullptr;
        while(t){
            c++;
            t=t->next;
        }
        if(c==n)return head->next;
        t=head;
        while(t){
            if(c==n+1){
                t->next=t->next->next;
                break;
            }
            c--;
            t=t->next;
        }
        return head;
    }
};