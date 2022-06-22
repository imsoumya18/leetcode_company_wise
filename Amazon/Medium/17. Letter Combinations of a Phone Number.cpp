class Solution
{
    public:
        vector<string> letterCombinations(string digits)
        {
            if (digits.size() == 0)
            {
                vector<string> vct;
                return vct;
            }

            vector<string> vct
            {
                "" };

            string keys[10] = { "",
                "",
                "abc",
                "def",
                "ghi",
                "jkl",
                "mno",
                "pqrs",
                "tuv",
                "wxyz" };

            for (auto i: digits)
            {
                vector<string> temp = vct;
                vct.clear();
                for (auto j: temp)
                    for (auto k: keys[i - '0'])
                        vct.push_back(j + k);
            }

            return vct;
        }
};
