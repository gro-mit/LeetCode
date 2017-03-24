class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode* mirr=new TreeNode(root->val);
        mirr->left=invertTree(root->right);
        mirr->right=invertTree(root->left);
        return mirr;
    }
};
