class Solution {
public:
    int fib(int n) {
        int temp =0 ;
        if(n==0) return 0;
        if(n==1) return 1;
        temp = fib(n-1) + fib(n-2);
        return temp;
    }
};