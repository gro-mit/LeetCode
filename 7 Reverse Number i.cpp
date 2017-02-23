class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        bool flag = (x>0)?true:false;
        x = (x>0)?x:-x;
        for(;x;){
            result = result*10 + x%10;
            x/=10;
        }
        if(result>2147483647||(flag==false && result > 2147483648)) return 0;
        else{
            if(flag) return result;
            else return -result;
        }
    }
};
