class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        int count=nums.size(),end=nums.size();
        for(int i=0;i<end;i++){
            if(nums[i]==val){
                int j=i;
                count--;
                while(j<end-1){
                    nums[j]=nums[j+1];
                    j++;
                }
                i--;
                end--;
            }
        }
        if(nums[end-1]==val) count--;
        return  count;
    }
};
