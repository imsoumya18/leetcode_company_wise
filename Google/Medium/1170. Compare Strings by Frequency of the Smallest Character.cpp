class Solution
{
    public:
        vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
        {
            vector<int> q, w, vct;

            for (auto x: queries)
            {
                for (int i = 0; i < x.size() - 1; i++)
                    for (int j = 0; j < x.size() - i - 1; j++)
                        if (x[j + 1] - 'a'<x[j] - 'a')
                            swap(x[j], x[j + 1]);
                int cnt = 0;
                for (auto i: x)
                    if (i == x[0])
                        cnt++;
                    else
                        break;
                q.push_back(cnt);
            }

            for (auto x: words)
            {
                for (int i = 0; i < x.size() - 1; i++)
                    for (int j = 0; j < x.size() - i - 1; j++)
                        if (x[j + 1] - 'a'<x[j] - 'a')
                            swap(x[j], x[j + 1]);
                int cnt = 0;
                for (auto i: x)
                    if (i == x[0])
                        cnt++;
                    else
                        break;
                w.push_back(cnt);
            }

            for (auto i: q)
            {
                int cnt = 0;
                for (auto j: w)
                    if (i < j)
                        cnt++;
                vct.push_back(cnt);
            }

            return vct;
        }
};
