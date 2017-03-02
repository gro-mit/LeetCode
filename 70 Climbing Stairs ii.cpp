class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1) return 1;
        int s1=0,s2=1;
        int sum;
        int i=0;
        while(i<n){
            sum=s1+s2;
            s1=s2;
            s2=sum;
            i++;
        }
        return sum;
    }
};
