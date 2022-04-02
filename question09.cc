class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else if(x == 0){
            return true;
        }
        else{
            std::string xstr = std::to_string(x);
            int left = 0;
            int right = xstr.size() - 1;
            while(left < right){
                if(xstr[left] != xstr[right]){
                    return false;
                }
                ++left;
                --right;
            }
            return true;
        }
    }
        
};
