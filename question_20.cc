/*****************
a stack can solve this problem.
*****************/

class Solution {
public:
    bool isValid(string s) {
        vector<char> astack;
        int length = s.size();
        for(int i = 0;i < length;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                astack.push_back(s[i]);
            }
            else{
                if(astack.empty()){
                    return false;
                }
                if((s[i] == ')' && astack.back() == '(') || (s[i] == ']' && astack.back() == '[') || (s[i] == '}' && astack.back() == '{')){
                    astack.pop_back();
                    continue;
                }
                return false;
            }
        }
        if(!astack.empty()){
            return false;
        }
        return true;
    }
};
