class Solution {
public:
    int firstBadVersion(int n) {
        if(!isBadVersion(n))
            return -1;
        int p=0,q=n,mid;
        while(p<q){
            mid=p+(q-p)/2;
            if(isBadVersion(mid)){
                q=mid;
            } else{
                p=mid+1;
            }
        }
        return p;
    }
};
