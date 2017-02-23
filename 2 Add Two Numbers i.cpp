// struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//  };
// 注意flag进位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode List(0);
        ListNode* P = &List;
        int flag = 0;
        while (l1||l2){
            int val = (l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0)+flag;
            flag = val/10;
            val = val%10;
            P->next = new ListNode(val);
            P = P->next;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        if(flag > 0){
            P->next = new ListNode(flag);
            P = P->next;
        }
        return List.next;
    }
};
