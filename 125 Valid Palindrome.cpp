class Solution {
public:
    bool isAlphanumeric(char a){
        if(a>='0'&&a<='9') return true;
        else if(a>='a'&&a<='z') return true;
        else if(a>='A'&&a<='Z') return true;
        else return false;

    }
    char toLower(char a){
        if(a>='A'&&a<='Z') return 'a'+a-'A';
        return a;
    }
    bool isPalindrome(string s) {
        if(s=="")return true;
        int front=0,tail=s.length()-1;
        while(true){
            while(front<s.length()&&!isAlphanumeric(s[front]))
                front++;
            while(tail>=0&&!isAlphanumeric(s[tail]))
                tail--;
            if(toLower(s[front])!=toLower(s[tail]))
                return false;
            if(front>=tail) return true;
            front++;
            tail--;
        }
    }
};
