class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0,end=s.length()-1;
        while(end>=0&&s[end]==' ') end--;
        while(end>=0&&s[end]!=' ') {
            end--;
            length++;
        }
        return length;
    }
};
