class Solution {
public:
    int minimumPushes(string word) {
        int temp  = 0;
        for(int i=0;i<word.length();i++){
            temp = temp +(i / 8 +1);
        }
        return temp;
    }
};