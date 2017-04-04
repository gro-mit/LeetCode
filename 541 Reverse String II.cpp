class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i+=2*k){
            for(int j=i,p=min(i+k-1,(int)s.length()-1);j<p;j++,p--){
                swap(s[j],s[p]);
            }
        }
        return s;
    }
};
