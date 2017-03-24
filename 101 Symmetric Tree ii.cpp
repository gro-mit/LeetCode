class Solution {
public:
    bool mirrMatched(TreeNode*t1,TreeNode* t2){
        if(t1==NULL||t2==NULL) return t1==t2;
        if(t1->val==t2->val){
            return mirrMatched(t1->left,t2->right)&&mirrMatched(t1->right,t2->left);
        }
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return mirrMatched(root->left,root->right);
    }
};
