class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode* List = new ListNode(0);
        ListNode* P = List;
        int flag = 0;
        while(l1||l2||flag){
            if(l1){
                P->val+=l1->val;
            }
            if(l2){
                P->val+=l2->val;
            }
            flag = (P->val>=10)?1:0;
            if(flag>0){
                P->val-=10;
            }
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            if(l1||l2||flag){
                P->next = new ListNode(flag);
                P = P->next;
            }
        }
        return List;
    }
};
