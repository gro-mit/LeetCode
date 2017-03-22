
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        int res=0;
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()){
            TreeNode* node=bfs.front();
            bfs.pop();
            if(node->left!=NULL){
                if(node->left->left==NULL&&node->left->right==NULL)
                    res+=node->left->val;
                else
                    bfs.push(node->left);
            }
            if(node->right!=NULL)
                bfs.push(node->right);
        }
        return res;
    }
};
