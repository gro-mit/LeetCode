class Solution {//后序遍历从最大值开始累加
public:
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return NULL;
        convertBST(root->right);
        root->val+=sum;
        sum=root->val;
        convertBST(root->left);
        return root;
    }
};
