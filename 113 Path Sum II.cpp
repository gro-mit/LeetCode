class Solution {
public:
    void dfs(TreeNode* root,int sum,vector<vector<int>>& res,vector<int> temp){
        if(root==NULL) return;
        temp.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&root->val==sum)
            res.push_back(temp);
        if(root->left!=NULL)
            dfs(root->left,sum-root->val,res,temp);
        if(root->right!=NULL)
            dfs(root->right,sum-root->val,res,temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL) return {};
        vector<vector<int>> res;
        vector<int>temp;
        dfs(root,sum,res,temp);
        return res;
    }
};
