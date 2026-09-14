// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1;
        int ans;
        while(st <= n){
            int mid = st + (n-st)/2;
            if(isBadVersion(mid)){
                n = mid;
            }else{
                st = mid+1;
            }
            if(st == n){
                ans = st;
                break;
            }
        }
        return ans;
    }
};