/**********************************
This question is ask how to find the length of the last word.Words is devided by the space.
I start from the input string's back,and it can be easily solved.
**********************************/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;
        int length = 0;
        while(end >= 0){
            if(s[end] == ' '){
                end--;
            }
            else{
                break;
            }
        }
        while(end >= 0){
            if(s[end] == ' '){
                break;
            }
            end--;
            length++;
        }
        return length;
    }
};
