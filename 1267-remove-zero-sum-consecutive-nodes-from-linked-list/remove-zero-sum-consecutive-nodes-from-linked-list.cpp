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
 //chatgpt
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode * dummy=new ListNode(0,head);
        unordered_map<int,ListNode*>um;
        ListNode * temp=dummy;
        int sum=0;
        while(temp){
            sum+=temp->val;
            if(um.count(sum)){
                ListNode * t=um[sum];
                ListNode * n=t->next;
                int aux=sum;
                while(n!=temp){
                    aux+=n->val;
                    um.erase(aux);
                    n=n->next;
                }
                t->next=temp->next;
            }
            else um[sum]=temp;
            temp=temp->next;
        }
        return dummy->next;;
    }
};