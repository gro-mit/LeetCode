class Solution {
public:
    ListNode* mergeList(ListNode* l1,ListNode*l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val<=l2->val){
            l1->next=mergeList(l1->next,l2);
            return l1;
        } else{
            l2->next=mergeList(l1,l2->next);
            return l2;
        }
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* slow=head,*fast=head;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        fast=slow->next;
        slow->next=NULL;
        ListNode* left=sortList(head);
        ListNode* right=sortList(fast);
        return mergeList(left,right);
    }
};
