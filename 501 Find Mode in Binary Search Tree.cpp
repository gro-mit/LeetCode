class Solution {
public:
    int modeCount(TreeNode* root,unordered_map<int,int>& mc){
        if(root==NULL)
            return 0;
        if(mc.find(root->val)==mc.end())
            mc.insert(pair<int,int>(root->val,1));
        else mc[root->val]++;
        return max(mc[root->val],max(modeCount(root->left,mc),modeCount(root->right,mc)));
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mc;
        vector<int> res;
        int count=modeCount(root,mc);
        for(pair<int,int> mode:mc){
            if(mode.second==count)
                res.push_back(mode.first);
        }
        return res;
    }
};
