class Solution
{
    public:
        vector<string> reorderLogFiles(vector<string> &logs)
        {
            vector < string>
                let, dig;
            int l = 0;

            for (int i = 0; i < logs.size(); i++)
                if (isdigit(logs[i][logs[i].find(' ') + 1]))

                    dig.push_back(logs[i]);

                else
                    let.push_back(logs[i]);

            for (int i = 0; i<                let.size() - 1; i++)
                for (int j = 0; j<                    let.size() - i - 1; j++)
                {
                    string str =
                        let[j + 1].substr(let[j + 1].find(' ') + 1);
                    string str2 =
                        let[j].substr(let[j].find(' ') + 1);

                    if (str.compare(str2) < 0)
                        swap(let[j],
                            let[j + 1]);
                    else if (str.compare(str2) == 0)
                    {
                        string str3 =
                            let[j + 1].substr(0,
                                let[j + 1].find(' '));
                        string str4 =
                            let[j].substr(0,
                                let[j].find(' '));

                        if (str3.compare(str4) < 0)
                            swap(let[j],
                                let[j + 1]);
                    }
                }

            int i = 0;
            for (auto j: let)
            {
                logs[i] = j;
                i++;
            }
            for (auto j: dig)
            {
                logs[i] = j;
                i++;
            }

            return logs;
        }
};
