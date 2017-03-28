class Solution {
public:
    bool findPath(TreeNode* root,TreeNode* target,vector<TreeNode*>& path){
        if(root==target) return true;
        if(root->left!=NULL){
            path.push_back(root->left);
            if(findPath(root->left,target,path)) return true;
            path.pop_back();
        }
        if(root->right!=NULL){
            path.push_back(root->right);
            if(findPath(root->right,target,path)) return true;
            path.pop_back();
        }
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> ppath,qpath;
        ppath.push_back(root);
        qpath.push_back(root);
        findPath(root,p,ppath);
        findPath(root,q,qpath);
        if(ppath.size()<qpath.size()){
            swap(ppath,qpath);
        }
        TreeNode* lca=root;
        for(int i=0;i<min(ppath.size(),qpath.size());i++){
            if(ppath[i]->val==qpath[i]->val)
		lca=ppath[i];
            else break;
        }
        return lca;
    }
};
