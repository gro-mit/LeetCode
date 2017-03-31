class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* sortedhead=new ListNode(INT_MIN);
        while(head){
            ListNode* node=head;
            head=head->next;
            ListNode* Pnode=sortedhead;
            ListNode* Nnode=Pnode->next;
            while(Nnode&&Nnode->val<node->val){
                Pnode=Nnode;
                Nnode=Nnode->next;
            }
            Pnode->next=node;
            node->next=Nnode;
        }
        return sortedhead->next;
    }
};
