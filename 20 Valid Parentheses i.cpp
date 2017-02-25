class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0||s.length()%2==1) return false;
        stack<char> left;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                left.push(s[i]);
            } else{
                if(left.empty()) return false;
                if((left.top()=='('&&s[i]==')')||(left.top()=='['&&s[i]==']')||(left.top()=='{'&&s[i]=='}')){
                    left.pop();
                } else{
                    return false;
                }
            }
        }
        if(left.size()==0) return true;
        else return false;
    }
};