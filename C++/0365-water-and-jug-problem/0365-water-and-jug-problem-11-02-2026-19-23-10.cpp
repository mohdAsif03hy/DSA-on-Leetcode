class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    bool canMeasureWater(int x, int y, int target) {
        int g = gcd(x, y);

        if (target == 0)
            return true;

        if (target > x + y)
            return false;

        return target % g == 0;
    }
};