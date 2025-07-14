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
    int getDecimalValue(ListNode* head) {
        vector <int> v;
        ListNode *t=head;
        while(t){
            v.push_back(t->val);
            t=t->next;
        }
        int ans=0;
        int mul=2;
        if(v[v.size()-1]==1) ans++;
        for(int i=v.size()-2; i>=0; i--){
            ans+=mul*v[i];
            mul*=2;
        }
        return ans;
    }
};