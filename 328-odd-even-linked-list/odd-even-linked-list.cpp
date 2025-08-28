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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)return head;
        ListNode * eh=nullptr;
        ListNode * et=nullptr;
        ListNode * oh=nullptr;
        ListNode * ot=nullptr;
        int c=1;
        while(head){
            if(c%2==0){
                if(!eh)et=eh=head;
                else{
                    et->next=head;
                    et=et->next;
                }
            }
            else{
                if(!oh)ot=oh=head;
                else{
                    ot->next=head;
                    ot=ot->next;
                }
            }
            head=head->next;
            c++;
        }
        if(!eh)return oh;
        else if(!oh)return eh;
        if (et) et->next = nullptr;
        ot->next=eh;
        return oh;
    }
};