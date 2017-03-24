class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            queue<TreeNode*> tempque;
            vector<int> tempvec;
            while(!que.empty()){
                TreeNode* node=que.front();
                que.pop();
                if(node->left!=NULL)
                    tempque.push(node->left);
                if(node->right!=NULL)
                    tempque.push(node->right);
                tempvec.push_back(node->val);
            }
            que=tempque;
            res.push_back(tempvec);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
