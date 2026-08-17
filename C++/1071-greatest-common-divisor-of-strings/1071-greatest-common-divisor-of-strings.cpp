class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int  i =0;
        int j =0;
        string ans ="";
        if(str1 + str2 != str2+str1) return "";
        int temp =gcd(str1.length(),str2.length());
        return str1.substr(0,temp);
    }
};  