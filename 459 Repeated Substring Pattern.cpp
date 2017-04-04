class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=s.length();
        for(int flag=1;flag<len/2+1;flag++)
            for(int i=0;i<len-flag;i++){
                if(s[i]!=s[i+flag]) break;
                if(len%flag==0&&i==len-flag-1) return true;
            }
        return false;
    }
};
