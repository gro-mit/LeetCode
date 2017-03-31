class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int h=0;
        for(int i=0;i<citations.size();i++){
            h++;
            if(citations[i]<h) return h-1;
        }
        return h;
    }
};
