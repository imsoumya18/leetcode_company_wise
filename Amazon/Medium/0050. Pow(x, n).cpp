class Solution
{
    public:
        double myPow(double x, int n)
        {
            if (n == 0)
                return 1;

            long long nn = n;

            if (nn < 0)
            {
                x = 1 / x;
                nn = nn *(-1);
            }

            if (nn % 2 == 0)
            {
                double temp = myPow(x, nn / 2);
                return temp * temp;
            }
            else
            {
                double temp = myPow(x, nn - 1);
                return x * temp;
            }
        }
};
