class Solution {
public:
    int diameter=0;
    int depth(TreeNode*root){
        if(root==NULL)
            return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        if(diameter<left+right)
            diameter=left+right;
        return left>right?left+1:right+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return diameter;
    }
};
