class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[flag]){
                nums[++flag]=nums[i];
            }
        }
        return ++flag;
    }
};