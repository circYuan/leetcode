/***********************
Same as what I write in C.
***********************/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0;
        int length = nums.size();
        int end = length - 1;
        int median = (begin + end) / 2;
        while(begin <= end){
            if(nums[median] == target){
                return median;
            }
            else if(nums[median] < target){
                begin = median + 1;
            }
            else{
                end = median - 1;
            }
            median = (begin + end) / 2;
        }
        return begin;
    }
};
