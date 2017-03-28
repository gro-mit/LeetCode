class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return vector<vector<int>>();
        queue<TreeNode*> que;
        vector<vector<int>> res;
        que.push(root);
        while(!que.empty()){
            vector<int> levelnodes;
            queue<TreeNode*> tempque;
            while(!que.empty()){
                TreeNode* node=que.front();
                que.pop();
                if(node->left!=NULL)
                    tempque.push(node->left);
                if(node->right!=NULL)
                    tempque.push(node->right);
                levelnodes.push_back(node->val);
            }
            res.push_back(levelnodes);
            que=tempque;
        }
        for(int i=1;i<res.size();i+=2){
            reverse(res[i].begin(),res[i].end());
        }
        return res;
    }
};
