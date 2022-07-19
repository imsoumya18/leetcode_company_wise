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
    public:
        TreeNode* help(TreeNode *root, vector<int> &to_delete, vector<TreeNode*> &vct)
        {
            if (root == NULL)
                return NULL;

            root->left = help(root->left, to_delete, vct);
            root->right = help(root->right, to_delete, vct);

            for (auto i: to_delete)
            {
                if (i == root->val)
                {
                    if (root->left != NULL)
                        vct.push_back(root->left);
                    if (root->right != NULL)
                        vct.push_back(root->right);
                    return NULL;
                }
            }
            return root;
        }

    vector<TreeNode*> delNodes(TreeNode *root, vector<int> &to_delete)
    {
        vector<TreeNode*> vct;
        int flag = 0;

        if (root == NULL)
            return vct;
        else
            for (auto i: to_delete)
                if (i == root->val)
                {
                    flag++;
                    break;
                }

        if (flag == 0)
            vct.push_back(root);

        help(root, to_delete, vct);

        return vct;
    }
};
