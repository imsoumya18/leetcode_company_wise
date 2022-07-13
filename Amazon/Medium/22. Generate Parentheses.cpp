class Solution
{
    public:
        void helper(vector<string> &vct, int n, int oc, int cc, string s)
        {
            if (oc == n && cc == n)
            {
                vct.push_back(s);
                return;
            }

            if (oc < n)
                helper(vct, n, oc + 1, cc, s + "(");

            if (cc < oc)
                helper(vct, n, oc, cc + 1, s + ")");
        }

    vector<string> generateParenthesis(int n)
    {
        vector<string> vct;
        int oc = 0, cc = 0;
        helper(vct, n, oc, cc, "");
        return vct;
    }
};
