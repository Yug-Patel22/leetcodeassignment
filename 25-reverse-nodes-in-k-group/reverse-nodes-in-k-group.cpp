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
    ListNode * rev(ListNode * head){
        ListNode * curr=head,*pre=nullptr;
        while(curr){
            ListNode * temp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=temp;
        }
        return pre;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c=0;
        ListNode *h=head,*t=head,*revhead=nullptr,*last=head,*prehead=nullptr;
        while(t){
            c++;
            if(c==k){
                last=t->next;
                t->next=nullptr;
                revhead=rev(h);
                if(prehead)prehead->next=revhead;
                else head=revhead;
                prehead=h;
                h=last;
                t=last;
                c=0;
            }
            else t=t->next;
        }
        if(prehead)prehead->next=h;
        return head;
    }
};