class Solution
{
    public:
        void permutation(vector<vector < int>> &vct, vector< int > nums, vector< int > store, vector< int > map)
        {
            int flag = 0;
            vector<int> curr_store, curr_map;
            for (int i = 0; i < map.size(); i++)
            {
                curr_store = store;
                curr_map = map;
                if (curr_map[i] == 0)
                {
                    flag = 1;
                    curr_store.push_back(nums[i]);
                    curr_map[i] = 1;
                    permutation(vct, nums, curr_store, curr_map);
                }
            }

            if (flag == 0)
                vct.push_back(curr_store);
        }

    vector<vector < int>> permute(vector<int> &nums)
    {
        vector<vector < int>> vct;
        vector<int> map(nums.size(), 0), store;

        permutation(vct, nums, store, map);

        return vct;
    }
};
