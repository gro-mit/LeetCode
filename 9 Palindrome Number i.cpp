class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x == 0)
            return true;
        vector<int> temp;
        while(x!=0){
            temp.push_back(x%10);
            x/=10;
        }
        for(int i=0;i<(temp.size()/2+1);i++){
            if(temp[i]!=temp[temp.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
