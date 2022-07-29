class Solution
{
    public:
        int firstUniqChar(string s)
        {
            vector<int> vct(26, 0);
            int i, flag = 0;

            for (auto i: s)
                vct[i - 'a']++;

            for (i = 0; i < s.size(); i++)
                if (vct[s[i] - 'a'] == 1)
                {
                    flag++;
                    break;
                }

            if (flag == 0)
                return -1;
            else
                return i;
        }
};
