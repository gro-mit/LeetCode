class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s="1";
        while(--n){
            s=Count(s);
        }
        return s;
    }
    inline string Count(string s){
        string result="";
        int i=0,count=0;
        char c=s[0],temp;
        while(i<s.length()){
            if(c==s[i]){
                while(c==s[i]){
                    count++;
                    i++;
                }
                temp=char('0'+count);
                result=result+temp+c;
                c=s[i];
                count=0;
            } else{
                temp='1';
                result=result+temp+c;
                i++;
            }
        }
        return result;
    }
};