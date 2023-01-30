class Solution {
public:
    int tribonacci(int n) {
        int tn0=0,tn1=1,tn2=1;
        int tn=2;
        
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        while(tn != n){
            int num = tn2+tn1+tn0;
            tn0=tn1;
            tn1=tn2;
            tn2=num;
            tn++;
        }
        return tn2;
    }
};