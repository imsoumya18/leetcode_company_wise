class Solution
{
    public:
        int trap(vector<int> &height)
        {
            int left[height.size()], right[height.size()];
            int tot = 0, max = -1;

            for (int i = 0; i < height.size(); i++)
            {
                if (height[i] > max)
                    max = height[i];
                left[i] = max;
            }
            max = -1;

            for (int i = height.size() - 1; i >= 0; i--)
            {
                if (height[i] > max)
                    max = height[i];
                right[i] = max;
            }

            for (int i = 0; i < height.size(); i++)
                if (left[i] < right[i])
                    tot += (left[i] - height[i]);
                else
                    tot += (right[i] - height[i]);

            return tot;
        }
};
