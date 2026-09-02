class Solution {
public:
    int climbStairs(int n) {
        int first =1;
        int second = 2;
        int way =0;
        if(n==1){
            return first;
        }
        if(n==2){
            return second;
        }
        for(int i=2;i<n;i++){
            way = first + second;
            first = second;
            second = way;
        }
        return way;
    }
};
