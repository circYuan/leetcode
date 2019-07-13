/**************************
Using recurtion to solve this problem,but it's not fast.
**************************/


class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string trans = countAndSay(n-1);
        int num = trans[0] - 48;
        int count = 1;
        string ch;
        string re;
        int length = trans.length();
        for(int i = 1;i < length;i++){
            if(num == trans[i] - 48){
                count++;
            }
            else{
                ch = to_string(count);
                re += ch;
                re += trans[i-1];
                num = trans[i] - 48;
                count = 1;
            }
        }
        ch = to_string(count);
        re += ch;
        re += trans[length - 1];
        return re;
    }
};
