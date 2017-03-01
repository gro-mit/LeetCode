class Solution {
public:
    int mySqrt(int x) {
        if(x<0) return -1;
        else if(x==0) return 0;
        double eps=0.0000001,res=x/2,lastRes;
        while(abs(res-lastRes)>eps){
            lastRes=res;
            res=res-res/2+x/2.0/res;
        }
        return int(res);
    }
};
