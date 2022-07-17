class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> vct;
            int i = 0, j = 0, tot = nums1.size() + nums2.size();

            while (i < nums1.size() && j < nums2.size())
            {
                if (nums1[i] < nums2[j])
                {
                    vct.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    vct.push_back(nums2[j]);
                    j++;
                }
            }

            while (i < nums1.size())
            {
                vct.push_back(nums1[i]);
                i++;
            }
            while (j < nums2.size())
            {
                vct.push_back(nums2[j]);
                j++;
            }

            for (auto i: vct)
                cout << i << endl;
            cout << endl;

            if (tot % 2 == 0)
            {
                double ans = (vct[tot / 2] + vct[tot / 2 - 1]) / 2.0;
                return ans;
            }
            else
            {
                double ans = vct[tot / 2.0];
                return double(ans);
            }
        }
};
