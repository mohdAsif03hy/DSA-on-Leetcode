class Solution {
public:
    int addDigits(int num) {
        int temp1 =0 ;
        int temp2 =0;
            while(num % 10 != num){
            temp1  = num  / 10;
            temp2 = num % 10;
            num = temp1 + temp2;    
            }
       return num;
      
    }
};