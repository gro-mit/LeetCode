class Solution {
public:
    int dfs(TreeNode* root,int sum){
        if(root==NULL) return 0;
        int res=(root->val==sum)?1:0;
        res+=dfs(root->left,sum-root->val);
        res+=dfs(root->right,sum-root->val);
        return res;
    }
    int pathSum(TreeNode* root,int sum) {
        if(root==NULL) return 0;
        int res= dfs(root,sum);
        res+=pathSum(root->left,sum);
        res+=pathSum(root->right,sum);
        return res;
    }
};
