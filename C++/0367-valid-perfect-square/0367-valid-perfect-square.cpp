class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        for(int i = 2; i  <= num / i; i++){
            if(i == num / i && num % i == 0){
                return true;
            }
        }
        return false;
    }
};