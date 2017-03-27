class Solution {
public:
    void findPath(TreeNode* root,TreeNode* target,vector<TreeNode*>& path){
        if(root==NULL||target==NULL) return;
        if(target->val==root->val){
            path.push_back(root);
            return;
        }
        else if(target->val<root->val){
            path.push_back(root->left);
            findPath(root->left,target,path);
        } else{
            path.push_back(root->right);
            findPath(root->right,target,path);
        }
        return;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> ppath,qpath;
        findPath(root,p,ppath);
        findPath(root,q,qpath);
        if(ppath.size()<qpath.size()){
            swap(ppath,qpath);
        }
        TreeNode* temp=root;
        for(int i=0;i<min(ppath.size(),qpath.size());i++){
            if(ppath[i]->val==qpath[i]->val){
                temp=ppath[i];
                continue;
            } else{
                return temp;
            }
        }
        return qpath[qpath.size()-1];
    }
};
