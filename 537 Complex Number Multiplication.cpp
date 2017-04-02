class Solution {
public:
    vector<int>toInt(string a){
        int plus=int(a.find('+',1));
        int r=atoi(a.substr(0,plus).c_str());
        int v=atoi(a.substr(plus+1,a.length()-plus-2).c_str());
        return vector<int>({r,v});
    }
    string complexNumberMultiply(string a, string b) {
        if(a==""||b=="")return "0";
        vector<int> first=toInt(a),second=toInt(b),res(2);
        res[0]=first[0]*second[0]-first[1]*second[1];
        res[1]=first[0]*second[1]+first[1]*second[0];
        string s=to_string(res[0])+"+"+to_string(res[1])+"i";
        return s;
    }
};
