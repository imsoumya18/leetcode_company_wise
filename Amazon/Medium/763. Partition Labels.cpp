class Solution
{
    public:
        vector<int> partitionLabels(string s)
        {
            vector<int> partitions;
            int i, find, first = 0, last = 0;
            while (first < s.length())
            {
                for (i = first; i <= last; i++)
                {
                    find = s.length() - 1;
                    while (s[find] != s[i] && find > last)
                    {
                        find--;
                    }
                    if (find > last)
                        last = find;
                }
                partitions.push_back(last - first + 1);
                last++;
                first = last;
            }
            return partitions;
        }
};
