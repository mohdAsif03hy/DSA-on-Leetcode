class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum =0;
        int pair =0;
        if(num==1){
            return false;
        }
        for(int i= 1;i * i<=num ;i++){
            if(num % i == 0){
                sum += i;
                 pair = num / i;
        if (pair != i && pair != num)
            sum += pair;
            }
        }
      
       return sum == num;

    }
};