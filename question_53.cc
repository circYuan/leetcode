/*********************************
same as my C solution.
*********************************/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = 0,tmax = 0,suffix = 0;
        int min = INT_MIN;
        int tag = 0;
        for(auto & ele : nums){
            suffix += ele;
            if(suffix < 0){
                suffix = 0;
                max = tmax > max ? tmax : max;
                tmax = 0;
                min = min > ele ? min : ele;
            }
            else{
                tag = 1;
                tmax = suffix;
                max = tmax > max ? tmax : max;
            }
        }
        if(tag == 1){
            return max;
        }
        return min;
    }
};
