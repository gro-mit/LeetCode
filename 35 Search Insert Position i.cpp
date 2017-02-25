class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int flag=0;
        while (!nums.empty()&&flag<nums.size()){
            if(target<=nums[flag]){
                return flag;
            } else{
                flag++;
            }
        }
        return flag;
    }
};