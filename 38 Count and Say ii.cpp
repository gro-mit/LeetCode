class Solution {
public:
    string countAndSay(int n) {
        if(n==0) return "";
        if(n==1) return "1";
        string s="1";
        while(--n){
            string temp="";
            for(int i=0;i<s.length();i++){
                int count=1;
                while ((s[i]==s[i+1])&&(i<s.length()-1)){
                    count++;
                    i++;
                }
                temp=temp+char('0'+count)+s[i];
            }
            s=temp;
        }
        return s;
    }
};