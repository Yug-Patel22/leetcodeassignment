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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        vector <int> v;
        ListNode * t=head;
        while(t){
            if(t->val<x) v.push_back(t->val);
            t=t->next;
        }
        ListNode * ans=nullptr;
        ListNode * temp;
        if(!v.empty()){
            ans=new ListNode(v[0]);
            temp=ans;
        }
        for(int i=1; i<v.size(); i++){
            temp->next=new ListNode(v[i]);
            temp=temp->next;
        }
        t=head;
        while(t){
            if(t->val>=x){
                if(!ans){
                    ans=new ListNode(t->val);
                    temp=ans;
                }
                else{
                    temp->next=new ListNode(t->val);
                    temp=temp->next;
                }
            }
            t=t->next;
        }
        return ans;
    }
};