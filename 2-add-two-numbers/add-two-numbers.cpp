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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * t1=l1;
        ListNode * t2=l2;
        ListNode * resh=nullptr;
        ListNode *reshead=nullptr;
        int carry=0;
        while(t1 && t2){
            int a=t1->val+t2->val+carry;
            int n=a%10;
            carry=a/10;
            ListNode * newn=new ListNode(n);
            if(!resh){
                resh=newn;
                reshead=resh;
                t1=t1->next;
                t2=t2->next;
            }
            else{
                resh->next=newn;
                resh=resh->next;
                t1=t1->next;
                t2=t2->next;
            }
        }
        while(t1){
            int a=t1->val+carry;
            int n=a%10;
            carry=a/10;
            ListNode * newn=new ListNode(n);
            resh->next=newn;
            resh=resh->next;
            t1=t1->next;
        }
        while(t2){
            int a=t2->val+carry;
            int n=a%10;
            carry=a/10;
            ListNode * newn=new ListNode(n);
            resh->next=newn;
            resh=resh->next;
            t2=t2->next;
        }
        if(carry){
            ListNode * newn=new ListNode(carry);
            resh->next=newn;
        }
        return reshead;
    }
};