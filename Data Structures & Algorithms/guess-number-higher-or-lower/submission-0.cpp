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
        int k = 1, pick;
        while (k <= n) {
            int m = k + (n - k) / 2;
            int g = guess(m);
            if (g == 0) {
                pick = m;
                break;
            } else if (g == -1) {
                n = m - 1;
            } else {
                k = m + 1;
            }
        }
        return pick;
    }
};
