class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool left,right;
        if(p==NULL&&q==NULL) return true;
        else if(p==NULL||q==NULL) return false;
        else if(p->val==q->val){
            left=isSameTree(p->left,q->left);
            right=isSameTree(p->right,q->right);
            return left&&right;
        }
        else return false;
    }
};
