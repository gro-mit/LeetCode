
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(char a:magazine){
            mp[a]++;
        }
        for(char a:ransomNote){
            mp[a]--;
        }
        map<char,int>::iterator it=mp.begin();
        while(it!=mp.end()){
            if(it->second<0) return false;
            it++;
        }
        return true;
    }
};
