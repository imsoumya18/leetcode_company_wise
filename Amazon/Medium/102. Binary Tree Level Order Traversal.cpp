/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> levelOrder(TreeNode *root)
        {
            vector<vector < int>> res;
            vector<int> vct;
            if (root == NULL)
                return res;

            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);

            while (!q.empty())
            {
                TreeNode *node = q.front();
                q.pop();

                if (node != NULL)
                {
                   	// cout << node->val << " ";
                    vct.push_back(node->val);
                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);
                }
                else if (!q.empty())
                {
                   	// cout << endl;
                    res.push_back(vct);
                    vct.clear();
                    q.push(NULL);
                }
            }
            res.push_back(vct);

            return res;
        }
};
