class Solution {
public:
    vector<vector<int>> res;
    void bfs(TreeNode* root,int level){
        if(root==NULL) return;
        if(res.size()==level)
            res.push_back(vector<int>());
        res[level].push_back(root->val);
        bfs(root->left,level+1);
        bfs(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return vector<vector<int>>();
        bfs(root,0);
        return res;
    }
};
