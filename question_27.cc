/***********************************
using two index to retain the length and element,time complexity for O(n),100% of space and time.
***********************************/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int answer = 0;
        int index = 0;
        while(index < length){
            if(nums[index] != val){
                nums[answer] = nums[index];
                ++answer;
            }
            ++index;
        }
        
        
        return answer;
    }
};
