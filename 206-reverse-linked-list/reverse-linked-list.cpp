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
    ListNode* reverseList(ListNode* head) {
      if(!head || !head->next) return head;
      else{
        ListNode * t=head->next;
        ListNode * pre=head;
        ListNode * temp=nullptr;
        while(t){
            temp=t->next;
            t->next=pre;
            pre=t;
            t=temp;
        }
        head->next=nullptr;
        head=pre;
        return head;
      }  
    }
};