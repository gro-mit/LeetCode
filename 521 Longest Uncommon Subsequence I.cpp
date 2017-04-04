class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b)return -1;
        else if(a.length()!=b.length()) return max(a.length(),b.length());
        return a.length();
    }
};

