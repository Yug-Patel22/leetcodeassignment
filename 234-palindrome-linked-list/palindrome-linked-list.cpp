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
 //O(n)
class Solution {
public:
    ListNode * rev(ListNode * head){
        ListNode * cur=head;
        ListNode * pre=nullptr;
        while(cur){
            ListNode * temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * first=head;
        ListNode *f=head;
        ListNode *s=head;
        while(f && f->next){
            f=f->next->next;
            s=s->next;
        }
        ListNode * second=s;
        second=rev(second);
        while(second){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};