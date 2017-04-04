class Solution {
public:
    set<char> vowel={'a','e','i','o','u','A','E','I','O','U'};
    bool isVowel(const char a){
        if(vowel.find(a)==vowel.end()) return false;
        return true;
    }
    string reverseVowels(string s) {
        string res=string(s);
        int begin=0,end=res.length()-1;
        while(begin<end){
            if(!isVowel(res[begin]))
                begin++;
            if(!isVowel(res[end]))
                end--;
            if(isVowel(res[begin])&&isVowel(res[end])){
                swap(res[begin],res[end]);
                begin++;
                end--;
            }
        }
        return res;
    }
};
