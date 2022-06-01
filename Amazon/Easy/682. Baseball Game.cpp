class Solution
{
    public:
        int calPoints(vector<string> &ops)
        {
            int sum = 0;
            vector<int> ops2;

            for (int i = 0; i < ops.size(); i++)
            {
                if (ops[i] == "+")
                {
                    ops2.push_back(ops2[ops2.size() - 1] + ops2[ops2.size() - 2]);
                    sum += ops2.back();
                }
                else if (ops[i] == "D")
                {
                    ops2.push_back(2 *ops2.back());
                    sum += ops2.back();
                }
                else if (ops[i] == "C")
                {
                    sum -= ops2.back();
                    ops2.pop_back();
                }
                else
                {
                    ops2.push_back(stoi(ops[i]));
                    sum += ops2.back();
                }
            }

            return sum;
        }
};
