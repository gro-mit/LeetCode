class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0) return 0;
        int begin=0,end=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=' '){
                end++;
            }else if(s[i]==' '&&s[i+1]!=' '){
                begin=end=i+1;
            }
        }
        if(s[s.length()-1]!=' ') end++;
        return end-begin;
    }
};
