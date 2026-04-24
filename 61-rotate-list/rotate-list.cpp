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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        int c=0;
        ListNode *t=head;
        ListNode * tail=nullptr;
        while(t){
            c++;
            tail=t;
            t=t->next;
        }
        k%=c;
        if(k==c || k==0)return head;
        t=head;
        ListNode *h=nullptr;
        while(t && c>0){
            if(c==k+1){
                h=t->next;
                t->next=nullptr;
                break;
            }
            c--;
            t=t->next;
        }
        tail->next=head;
        return h;
    }
};