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
        int c1=0,c2=0;
        ListNode * t1=l1,*t2=l2;
        while(t1 || t2){
            if(t1){
                c1++;
                t1=t1->next;
            }
            if(t2){
                c2++;
                t2=t2->next;
            }
        }
        if(c2>c1){
            t1=l1;
            l1=l2;
            l2=t1;
        }
        c1=0;
        t1=l1;
        t2=l2;
        while(t1){
            if(t1 && !t2){
                int a=t1->val+c1;
                t1->val=a%10;
                c1=a/10;
            }
            else{
                int a=t1->val+t2->val+c1;
                t1->val=a%10;
                c1=a/10;
                t2=t2->next;
            }
            if(!(t1->next) && c1)t1->next=new ListNode(0);
            t1=t1->next;
        }
        return l1;
    }
};