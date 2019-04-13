/************************
pow() for O(logn) very fast!
************************/

class Solution {
public:
    double myPow(double x, int n) {
        double f;
        int tag = 0,tag1 = 0;
        if(n < 0){
            if(n != INT_MIN){
                n = 0 - n;
            }
            else{
                n = n + 1;
                n = 0 - n;
                tag1 = 1;
            }
            tag = 1;
        }
        if(n % 2 == 1){
            f = x;
        }
        else{
            f = 1;
        }
        if(n >= 2 && tag == 0){
            return f * myPow(x * x,n / 2);
        }
        else if(n >= 2 && tag == 1){
            if(tag1 == 0)
                return 1 / (f * myPow(x * x,n / 2));
            else{
                return 1 / (x * f * myPow(x * x,n / 2));
            }
        }
        else{
            if(tag == 0)
                return f;
            else
                return 1 / f;
        }
    }
};
