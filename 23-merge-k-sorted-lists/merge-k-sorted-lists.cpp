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
    struct compare{
        bool operator()(ListNode * a , ListNode * b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <ListNode * , vector<ListNode*> , compare> q;
        for(int i=0; i<lists.size(); i++){
            ListNode * t=lists[i];
            while(t){
                q.push(t);
                t=t->next;
            }
        }
        ListNode * head=nullptr;
        ListNode * t;
        while(!q.empty()){
            if(!head){
                ListNode * temp=q.top();
                temp->next=nullptr;
                head=temp;
                q.pop();
                t=head;
                continue;
            }
            ListNode * temp=q.top();
            temp->next=nullptr;
            t->next=temp;
            t=t->next;
            q.pop();
        }
        return head;
    }
};