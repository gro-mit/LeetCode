
class Solution {
public:
    int sum(vector<int>& arr,int n){
        int res=0;
        for(int i=0;i<n;i++){
            res+=arr[i];
        }
        return res;
    }
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int start=0;
        for(int i=0;i<nums.size();i++){
            if(i<sum(count,1))nums[i]=0;
            else if(i>=sum(count,1)&&i<sum(count,2))nums[i]=1;
            else nums[i]=2;
        }
    }
};
