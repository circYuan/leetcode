class Solution {
private:
    int roman_map[255];
public:
    Solution(){
        roman_map['I'] = 1;
        roman_map['V'] = 5;
        roman_map['X'] = 10;
        roman_map['L'] = 50;
        roman_map['C'] = 100;
        roman_map['D'] = 500;
        roman_map['M'] = 1000;
    }
    
    int romanToInt(string s) {
        int ret_num = 0;
        int length = s.size();
        if(length == 0){
            return 0;
        }
        int pre = 0, cur = 1;
        int tmp_num = roman_map[s[pre]];
        while(cur < length){
            if(roman_map[s[pre]] > roman_map[s[cur]]){
                ret_num += tmp_num;
                tmp_num = roman_map[s[cur]];
            }
            else if(roman_map[s[pre]] == roman_map[s[cur]]){
                tmp_num += roman_map[s[cur]];
            }
            else{
                tmp_num = roman_map[s[cur]] - tmp_num;
            }
            pre = cur;
            ++cur;
        }
        return ret_num + tmp_num;
    }
};
