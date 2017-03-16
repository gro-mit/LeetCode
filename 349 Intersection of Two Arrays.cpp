class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1,set2;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            set1.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            if(set1.find(nums2[j])!=set1.end()){
                set2.insert(nums2[j]);
            }
        }
        for(auto k=set2.begin();k!=set2.end();k++){
            res.push_back(*k);
        }
        return res;
    }
};
