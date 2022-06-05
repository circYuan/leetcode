class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int diff = 0;
        int length = nums.size();
        if (length == 0){
            return 0;
        }
        int cur = diff + 1;
        for (;cur < length; ++cur){
            if (nums[cur] != nums[diff]){
                nums[++diff] = nums[cur];
            }
        }
        return ++diff;
    }
};
