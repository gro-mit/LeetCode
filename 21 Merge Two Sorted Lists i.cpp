struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* p=head;
        while (l1&&l2){
            int a=l1->val,b=l2->val;
            if(a<=b){
                p->next=l1;
                p=l1;
                l1=l1->next;
            } else{
                p->next=l2;
                p=l2;
                l2=l2->next;
            }
        }
        p->next=l1?l1:l2;
        return head->next;
    }
};