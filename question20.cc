class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        int length = s.size();
        for(int i = 0;i < length;++i){
            if(ss.empty()){
                ss.push(s[i]);
            }
            else if((ss.top() == '(' && s[i] == ')')
              || (ss.top() == '{' && s[i] == '}')
              || (ss.top() == '[' && s[i] == ']')){
                ss.pop();
            }
            else{
                ss.push(s[i]);
            }
        }
        return ss.empty();
    }
};
