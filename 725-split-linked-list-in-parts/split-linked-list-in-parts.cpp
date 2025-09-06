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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        vector <ListNode*> v;
        ListNode * t=head;
        while(t){
            n++;
            t=t->next;
        }
        int len,a;
        if(n<=k){
            len=1;
            a=0;
        }
        else{
            len=n/k;
            a=n%k;
        }
        
        ListNode * pre=nullptr;
        ListNode * h;
        t=head;
        for(int i=0; i<k; i++){ 
            int j;
            if(a){
                j=-1;
                h=t;
                pre=nullptr;
                while(j<len){
                    if(!t) break;
                    pre=t;
                    t=t->next;
                    j++;
                }
                if(t)
                    pre->next=nullptr;
                v.push_back(h);
                a--;
            }
            else{
                j=0;
                h=t;
                pre=nullptr;
                while(j<len){
                    if(!t) break;
                    pre=t;
                    t=t->next;
                    j++;
                }
                if(t)
                    pre->next=nullptr;
                v.push_back(h);
            }
        }
        return v;
    }
};