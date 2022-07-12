class Solution
{
    public:
        string decodeString(string s)
        {
            stack<char> st;
            string ans;

            for (auto i: s)
            {
                ans = "";
                if (i == ']')
                {
                    while (st.top() != '[')
                    {
                        ans = st.top() + ans;
                        st.pop();
                    }
                    st.pop();
                    int n = 0, mult = 1;
                    while (!st.empty() && isdigit(st.top()))
                    {
                        n += mult *(st.top() - '0');
                        mult *= 10;
                        st.pop();
                    }
                    while (n--)
                        for (auto k: ans)
                            st.push(k);
                }
                else
                    st.push(i);
            }

            ans = "";

            while (!st.empty())
            {
                ans = st.top() + ans;
                st.pop();
            }

            return ans;
        }
};
