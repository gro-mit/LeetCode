class Solution {
public:
    bool detectCapitalUse(string word) {
        unordered_map<int,int> mp;
        if(word.length()<=1) return true;
        if(word[0]>='a'&&word[0]<='z'){
            for(int i=1;i<word.length();i++)
                if(word[i]>='a'&&word[i]<='z')
                    mp[0]++;
            if(mp[0]==word.length()-1) return true;
            else return false;
        }
        else for(int i=1;i<word.length();i++){
            if(word[i]>='A'&&word[i]<='Z')
                mp[1]++;
        }
        if(mp[1]==word.length()-1||mp[1]==0) return true;
        else return false;
    }
};
