class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        int length = strs.size();
        int min_size = 10000;
        string min_str;
        for(int i = 0;i < length;++i){
            if(strs[i].size() < min_size){
                min_size = strs[i].size();
                min_str = strs[i];
            }
        }
        for(int i = 0;i < min_size;++i){
            for(int j = 0;j < length;++j){
                if(min_str[i] != strs[j][i]){
                    return ret;
                }
            }
            ret += min_str[i];
        }
        return ret;
    }
};
