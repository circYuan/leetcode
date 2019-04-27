/**********************************
This problem is asked for givan n stairs,return the numbers of method to arrive the end point while you can only go one or two step.
**********************************/


class Solution {
public:
    int climbStairs(int n){
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        const int size = n;
        int table[size];
        table[0] = 1;
        for(int i = 1;i < size;i++){
            table[i] = 0;
        }
        return step(n-1,table) + step(n-2,table);
    }
    int step(int n,int * table){
        if(n < 0){
            return 0;
        }
        if(table[n] != 0){
            return table[n];
        }
        else{
            table[n] = step(n-1,table) + step(n-2,table);
            return table[n];
        }
    }
};
