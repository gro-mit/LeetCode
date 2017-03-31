class Solution {
public:
    static bool cmp(string a, string b){
        string c=a+b;
        string d=b+a;
        return c>d;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> numstr;
        string res="";
        for(int i=0;i<nums.size();i++){
            numstr.push_back(to_string(nums[i]));
        }
        sort(numstr.begin(),numstr.end(),cmp);
        if(numstr[0]=="0") return "0";
        for(auto str:numstr){
            res+=str;
        }
        return res;
    }
};
