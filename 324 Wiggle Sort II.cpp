class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> copynums(nums);
        sort(copynums.begin(),copynums.end());
        for(int i=0,j=(nums.size()-1)/2,k=nums.size()-1;i<nums.size();i+=2,j--,k--){
            nums[i]=copynums[j];
            if(i+1<nums.size())
                nums[i+1]=copynums[k];
        }
    }
};
