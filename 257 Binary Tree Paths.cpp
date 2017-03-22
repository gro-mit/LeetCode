class Solution {
public:
    void dfs(TreeNode* root,string s,vector<string>& res){
        if(root->left==NULL&&root->right==NULL){
            res.push_back(s);
            return ;
        }
        if(root->left!=NULL){
            dfs(root->left,(s+"->"+to_string(root->left->val)),res);
        }
        if(root->right!=NULL){
            dfs(root->right,s+"->"+to_string(root->right->val),res);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return {};
        vector<string> res;
        dfs(root,to_string(root->val),res);
        return res;
    }
};
