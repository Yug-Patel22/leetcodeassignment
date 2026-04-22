/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * tA=headA;
        ListNode * tB=headB;
        bool cA=false,cB=false;
        while((!cA || tA) && (!cB || tB)){
            if(!cA && !tA){
                cA=true;
                tA=headB;
            }
            else if(!cB && !tB){
                cB=true;
                tB=headA;
            }
            else if(tA==tB)return tA;
            else {
                tA=tA->next;
                tB=tB->next;
            }
            
        }
        return nullptr;
    }
};