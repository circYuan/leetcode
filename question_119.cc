/*This question is like question 118,finding the Pascal's Triangle but using only one array(vector).Similarly,I use DP to solve this 
question,and it is 100% faster and smaller than orter.*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        int length;
        int ele,tmp = 1;
        for(int i = 0;i < rowIndex + 1;i++){
            length = ans.size();
            for(int j = 1;j < length;j++){
                ele = tmp + ans[j];
                tmp = ans[j];
                ans[j] = ele;
            }
            ans.push_back(1);
        }
        return ans;
    }
};
