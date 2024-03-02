/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
    private:
        int res = 0;

        int height(TreeNode *node)
        {
            if (node == nullptr)
                return 0;
            int left = height(node->left);
            int right = height(node->right);
            res = std::max(res, left + right);
            return std::max(left, right) + 1;
        }
    public:
        int diameterOfBinaryTree(TreeNode* root) 
        {
            height(root);
            return res;
        }
};