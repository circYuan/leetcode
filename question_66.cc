/************************
This question is asking for simple adding 1.My idea is using carry bit and it can simply sove the problem.
************************/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int end = digits.size() - 1;
        digits[end] += 1;
        for(;end >= 0;end--){
            digits[end] += carry;
            if(digits[end] >= 10){
                digits[end] -= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        if(carry == 1){
            digits.push_back(1);
            for(int i = digits.size() - 1;i > 0;i--){
                int tmp = digits[i];
                digits[i] = digits[i-1];
                digits[i-1] = tmp;
            }
        }
        return digits;
    }
};
