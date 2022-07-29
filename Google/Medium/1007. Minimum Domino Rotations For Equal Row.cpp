class Solution
{
    public:
        int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
        {
            int match = 0, not_match = 0, flag = 0, ans = tops.size() + 1;

            for (int i = 0; i < tops.size(); i++)
                if (tops[i] == tops[0])
                {
                    if (bottoms[i] != tops[0])
                        match++;
                }
            else if (bottoms[i] == tops[0])
            {
                if (tops[i] != tops[0])
                    not_match++;
            }
            else
            {
                flag++;
                break;
            }

            if (flag == 0)
            {
                if (match < not_match)
                {
                    if (match < ans)
                        ans = match;
                }
                else if (not_match < ans)
                    ans = not_match;
            }

            match = 0;
            not_match = 0;
            flag = 0;

            for (int i = 0; i < tops.size(); i++)
                if (tops[i] == bottoms[0])
                {
                    if (bottoms[i] != bottoms[0])
                        match++;
                }
            else if (bottoms[i] == bottoms[0])
            {
                if (tops[i] != bottoms[0])
                    not_match++;
            }
            else
            {
                flag++;
                break;
            }
            if (flag == 0)
            {
                if (match < not_match)
                {
                    if (match < ans)
                        ans = match;
                }
                else if (not_match < ans)
                    ans = not_match;
            }

            if (ans == tops.size() + 1)
                return -1;

            return ans;
        }
};
