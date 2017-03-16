class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p=0,q=int(numbers.size()-1);
        while(p<q){
            if(numbers[p]+numbers[q]==target)
                break;
            else if(numbers[p]+numbers[q]>target){
                q--;
            } else if(numbers[p]+numbers[q]<target){
                p++;
            }
        }
        return vector<int>({++p,++q});
    }
};
