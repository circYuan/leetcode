/* Pascal's Triangle.This question is given a number , and using two dimention vector to retrun the Pascal's Triangle.
   I use DP to solve this problem.

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0){
            return {};
        }
        vector<vector<int>> ans;
        vector<int> row;
        row.push_back(1);
        ans.push_back(row);
        for(int i = 0;i < numRows - 1;i++){
            ans.push_back(oneRow(ans[i]));
        }
        return ans;
    }
    vector<int> oneRow(const vector<int> & row){
        vector<int> ret;
        int length = row.size() - 1;
        ret.push_back(1);
        for(int i = 0;i < length;i++){
            ret.push_back(row[i] + row[i+1]);
        }
        ret.push_back(1);
        return ret;
    }
};
