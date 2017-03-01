class Solution {
public:
    int mySqrt(int x) {
        if(x<0) return -1;
        else if(x==0) return 0;
        int a=1,b,c=x,res;
        while (a<=c){
            b=a+(c-a)/2;
            if(b<=x/b){//防止ｉｎｔ溢出
                a=b+1;
                res=b;
            } else{
                c=b-1;
            }
        }
        return res;
    }
};
