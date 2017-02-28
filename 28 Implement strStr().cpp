class Solution {
public:
    int strStr(string haystack, string needle) {
        int p=haystack.length(),q=needle.length();
        for(int i=0;i<=p-q;i++){
            int j=0;
            for(;j<q;j++){
                if(haystack[i+j]!=needle[j]) break;
            }
            if(j==q) return i;
        }
        return -1;
    }
};
