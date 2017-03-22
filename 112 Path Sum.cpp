class Solution {
public:
    void dfs(TreeNode*root,int sum,bool&res){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL&&root->val==sum){
            res=true;
            return;
        }
        if(root->left!=NULL){
            dfs(root->left,sum-root->val,res);
        }
        if(root->right!=NULL){
            dfs(root->right,sum-root->val,res);
        }
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        bool res=false;
        dfs(root,sum,res);
        return res;
    }
};
