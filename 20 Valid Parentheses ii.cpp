class Solution {
public:
    bool isValid(string s) {
        stack<char> right;
        for(char a:s){
            if(a=='(') right.push(')');
            else if(a=='[') right.push(']');
            else if(a=='{') right.push('}');
            else if(right.empty()||right.top()!=a)
                return false;
            else if(right.top()==a){
                right.pop();
            }
        }
        return right.empty();
    }
};