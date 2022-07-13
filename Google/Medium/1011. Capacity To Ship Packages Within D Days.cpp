class Solution
{
    public:
        bool day_find(vector<int> weights, int cap, int days)
        {
            int d = 1, curr = 0;

            for (int i = 0; i < weights.size(); i++)
            {
                if (curr + weights[i] > cap)
                {
                    i--;
                    d++;
                    if (d > days)
                        return false;
                    curr = 0;
                }
                else
                {
                    curr += weights[i];
                }
            }

            return d <= days;
        }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int hi = 0, lo = 0, ans;

        for (int i = 0; i < weights.size(); i++)
        {
            if (weights[i] > lo)
                lo = weights[i];
            hi += weights[i];
        }

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (day_find(weights, mid, days))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        return ans;
    }
};
