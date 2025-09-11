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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)return list2;
        if(!list2)return list1;
        ListNode * l1;
        ListNode * l2;
        ListNode * h;
        if(list1->val<list2->val){
            h=list1;
            l1=list1->next;
            l2=list2;
        }
        else{
            h=list2;
            l2=list2->next;
            l1=list1;
        }
        ListNode *t=h;
        while(l1 && l2){
            if(l1->val<=l2->val){
                t->next=l1;
                l1=l1->next;
            }
            else{
                t->next=l2;
                l2=l2->next;
            }
            t=t->next;
        }
        if(l1){
            t->next=l1;
        }
        if(l2){
            t->next=l2;
        }
        return h;
    }
};