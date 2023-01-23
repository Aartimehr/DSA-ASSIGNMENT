class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       map<ListNode*,int>mp;
       while(headA!=NULL){
             mp[headA]++;
             headA=headA->next;
        }
        while(headB!=NULL) {
            mp[headB]++;
            headB=headB->next;
        }
        for(auto x:mp) if(x.second>1) return x.first;
        return NULL;
     }

};
