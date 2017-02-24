class Solution {
public:
    int romanToInt(string s) {
        int res = num(s[0]);
        for(int i=1;i<s.size();i++){
            if(num(s[i])>num(s[i-1])){
                res = res+num(s[i])-num(s[i-1])*2;//*2=-1-1：上一位多加的一次，需要在这次一并减去。
            } else{
                res+=num(s[i]);
            }
        }
        return res;
    }
    inline int num(char a){
        switch (a){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
