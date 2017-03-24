class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode* node=que.front();
            que.pop();
            swap(node->left,node->right);
            if(node->left!=NULL)
                que.push(node->left);
            if(node->right!=NULL)
                que.push(node->right);
        }
        return root;
    }
};
