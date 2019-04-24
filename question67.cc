/************************************
This problem is asked how to add the binary system.In fack my solution is not good,so I'm write another version in C.
************************************/


class Solution {
public:
    string addBinary(string a, string b) {
        int C = 0;
        int endA = a.size() - 1;
        int endB = b.size() - 1;
        string answer;
        int A,B;
        while(endA >= 0 && endB >= 0){
            transfer(A,a[endA]);
            transfer(B,b[endB]);
            compute(A,B,C,answer);
            endA--;
            endB--;
        }
        for(;endA >= 0;endA--){
            transfer(A,a[endA]);
            compute(A,0,C,answer);
        }
        for(;endB >= 0;endB--){
            transfer(B,b[endB]);
            compute(B,0,C,answer);
            cout << C << endl;
        }
        if(C == 1){
            answer = "1" + answer;
        }
        return answer;
    }
    void transfer(int & A,char a){
        if(a == '0'){
            A = 0;
        }
        else{
            A = 1;
        }
    }
    void compute(int A,int B,int & C,string & answer){
        if(A ^ B ^ C){
            answer = "1" + answer;
        }
        else{
            answer = "0" + answer;
        }
        if((A & B) || (A & C) || (B & C)){
            C = 1;
        }
        else{
            C = 0;
        }
    }
};
