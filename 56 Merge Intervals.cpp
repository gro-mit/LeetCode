class Solution {
public:
    static bool cmp(const Interval &a, const Interval &b){
        if(a.start == b.start) return a.end < b.end;
        return a.start < b.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        int len = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);

        vector<Interval> ans;
        for(int i = 0; i < len; i ++){
            int st = intervals[i].start;
            int ed = intervals[i].end;
            int idx = i + 1;
            while(idx < len){
                if(intervals[idx].start >= st && intervals[idx].start <= ed){
                    if(intervals[idx].end > ed) ed = intervals[idx].end;
                    idx ++;
                }
                else break;
            }
            Interval tmp(st, ed);
            ans.push_back(tmp);
            i = idx - 1;
        }

        return ans;
    }
};
