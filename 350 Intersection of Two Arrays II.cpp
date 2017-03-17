class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        multiset<int> set2;
        for(int i = 0; i < nums2.size(); i++)
            set2.insert(nums2[i]);
        for(int i = 0; i < nums1.size(); i++)
        {
            if(set2.find(nums1[i]) != set2.end())
            {
                result.push_back(nums1[i]);
                set2.erase(set2.find(nums1[i]));
            }
        }
        return result;
    }
};
