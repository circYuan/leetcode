/*********************
solution using concept of hash table,implementation by c++ stl unordered_multimap
*********************/

typedef unordered_multimap<int,int>::const_iterator CIT;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int,int> ansmap;
        vector<int> answer;
        //vector<int> co(nums);
        int length = nums.size();
        for(int i = 0;i < length;i++){
            ansmap.insert(make_pair(nums[i],i));
        }
        for(auto & ele : nums){
            int com = target - ele;
            if(ansmap.find(com) != ansmap.end()){
                if(ansmap.count(com) >= 2){
                    pair<CIT,CIT> range = ansmap.equal_range(com);
                    answer.push_back(ansmap.find(ele)->second);
                    answer.push_back((++(range.first))->second);
                    return answer;
                }
                else if(com != nums[ansmap.find(ele)->second]){
                    answer.push_back(ansmap.find(ele)->second);
                    answer.push_back(ansmap.find(com)->second);
                    return answer;
                }
            }
            else{
                continue;
            }
        }
        return answer;
    }
};
