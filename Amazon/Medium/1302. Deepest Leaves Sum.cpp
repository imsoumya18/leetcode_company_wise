/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    int sum = 0;
    public:
        int deepestLeavesSum(TreeNode *root)
        {
            int ht = cal_height(root);
            get_sum(root, 1, ht);
            return sum;
        }

    int cal_height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return max(cal_height(root->left), cal_height(root->right)) + 1;
    }

    int get_sum(TreeNode *root, int curr, int ht)
    {
        if (root != NULL)
        {
            if (curr == ht)
                sum += root->val;

            get_sum(root->left, curr + 1, ht);
            get_sum(root->right, curr + 1, ht);
        }
        return 0;
    }
};
