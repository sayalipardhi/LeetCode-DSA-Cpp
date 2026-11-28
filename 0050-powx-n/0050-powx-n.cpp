
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;

        long long binform = n;
        long double base = x;

        if(binform < 0) {
            base = 1.0L / base;
            binform = -binform;
        }

        long double ans = 1.0L;

        while(binform > 0) {
            if(binform % 2 == 1) {
                ans *= base;
            }

            base *= base;
            binform /= 2;
        }

        return (double)ans;
    }
};
