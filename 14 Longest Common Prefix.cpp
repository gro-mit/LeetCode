class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        for(int flag=0;flag<strs[0].size();flag++){
            for(int i=1;i<strs.size();i++){
                if(strs[i][flag]!=strs[0][flag]) return strs[0].substr(0,flag);
            }
        }
        return strs[0];
    }
};

