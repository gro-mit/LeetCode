class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* node=root;
        while(true){
            if(p->val<node->val&&q->val<node->val)
                return lowestCommonAncestor(node->left,p,q);
            if(p->val>node->val&&q->val>node->val)
                return lowestCommonAncestor(node->right,p,q);
            return node;
        }
    }
};
