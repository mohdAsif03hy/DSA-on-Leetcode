class Solution {
public:
    int mySqrt(int x) {
        int i =1;
        while(i<=x){
            if(i  <= x/i){
                i++;
            }else{  return i-1; } 
        }
        return i-1;
    }
};