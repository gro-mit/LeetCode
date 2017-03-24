class Solution {
public:
    TreeNode* dfsbuild(vector<int>& nums,int i,int j){
        if(i>j) return NULL;
        int mid=(i+j)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=dfsbuild(nums,i,mid-1);
        root->right=dfsbuild(nums,mid+1,j);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        return dfsbuild(nums,0,int(nums.size()-1));
    }
};
