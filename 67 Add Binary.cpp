class Solution {
public:
    string addBinary(string a, string b) {
        int la=a.length(),lb=b.length();
        if(la<lb){
            string temp=a;
            a=b;
            b=temp;
            int tmp=la;
            la=lb;
            lb=tmp;
        }
        string zero="";
        int num=la-lb;
        while(num--){
            zero+="0";
        }
        b=zero+b;
        int  carry=0;
        for(int i=la-1;i>=0;){
            if(a[i]!=b[i]){
                a[i]=char('1'+carry);
                if(a[i]=='2'){
                    carry=1;
                    a[i]='0';
                }
                i--;
            } else{
                if(a[i]=='1'){
                    a[i]=char('0'+carry);
                    carry=1;
                    i--;
                } else{
                    a[i]=char('0'+carry);
                    carry=0;
                    i--;
                }
            }
        }
        if(carry==0) return a;
        else{
            return "1"+a;
        }
    }
};
