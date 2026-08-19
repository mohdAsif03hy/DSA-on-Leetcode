class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "";
        string b = "";
        int n = s.length()/2;
        a  = s.substr(0,n);
        b  = s.substr(n,s.length()-1);
        int i =0;
        int j =0;
        int count1 = 0;
        int count2 = 0;
        while(i<a.length() && j<b.length()){
            if(a[i] == 'A' || a[i] == 'I' || a[i] == 'O' ||a[i] == 'U'||a[i] == 'E'
            || a[i] == 'a'||a[i] == 'i'||a[i] == 'o' ||a[i] == 'u'||a[i] == 'e' ){
                count1++;
            }
            if(b[j] == 'A' || b[j] == 'I' || b[j] == 'O' ||b[j] == 'U'||b[j] == 'E'
            || b[j] == 'a'||b[j] == 'i'||b[j] == 'o' ||b[j] == 'u'||b[j] == 'e' ){
                count2++;
            }
            i++;
            j++;

        }
        return count1 == count2;
    }
};