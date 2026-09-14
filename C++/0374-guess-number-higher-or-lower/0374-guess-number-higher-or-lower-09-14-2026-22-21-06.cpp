/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:

    int guessNumber(int n) {

        int st = 1;
        int ans = 0;
        while (st <= n) {
            int mid = st + (n - st) / 2;
            if (guess(mid) == -1) {
                n = mid - 1;
            }
            else if (guess(mid) == 1) {
                st = mid + 1;
            }
            else {
                ans = mid;
                break;
            }
        }
        return ans;
    }
};