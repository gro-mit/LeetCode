class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,left=-1,right=nums.size();
        while(i<right){
            if(nums[i]==0&&i!=++left)
                swap(nums[left],nums[i]);
            else if(nums[i]==2&&i!=--right)
                swap(nums[right],nums[i]);
            else i++;
        }
    }
};
