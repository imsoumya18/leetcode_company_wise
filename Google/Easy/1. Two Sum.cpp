class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int> vct;
            unordered_map<int, int> mp;

            for (int i = 0; i < nums.size(); i++)
            {
                if (mp.find(target - nums[i]) != mp.end())
                {
                    vct.push_back(mp[target - nums[i]]);
                    vct.push_back(i);
                    return vct;
                }
                mp[nums[i]] = i;
            }

            return vct;
        }
};
