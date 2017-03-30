class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res;
        for(int i=0;i<d.size();i++){
            int j=0,k=0;
            while(j<s.length()&&k<d[i].length()){
                if(s[j]==d[i][k]) k++;
                j++;
            }
            if(k==d[i].length()&&(res.length()<d[i].length()||(res.length()==d[i].length()&&res>d[i]))) res=d[i];
        }
        return res;
    }
};
