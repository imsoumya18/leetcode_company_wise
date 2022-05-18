class Solution
{
    public:
        vector<vector < int>> subsets(vector<int> &nums)
        {
            vector<vector < int>> subs;
            vector<vector < int>> subs2;
            vector<int> temp;
            subs.push_back(temp);

            for (auto i: nums)
            {
                for (auto j: subs)
                {
                    subs2.push_back(j);
                    j.push_back(i);
                    subs2.push_back(j);
                }
                subs = subs2;
                subs2.clear();
            }

            return subs;
        }
};
