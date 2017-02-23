//hash 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int another = target - nums[i];
            if(mp[another]>i && mp.find(another) != mp.end()){
                result.push_back(i);
                result.push_back(mp[another]);
                break;
            }
        }
        return result;
    }
};
