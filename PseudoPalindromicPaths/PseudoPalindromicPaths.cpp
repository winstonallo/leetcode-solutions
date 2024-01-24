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
class Solution {
public:    
    void checkPaths(TreeNode* root, int &counter, int path = 0) {
        if (root == NULL)
            return;
        path ^= (1 << root->val);
        if (root->left == NULL && root->right == NULL){
            if ((path & (path - 1)) == 0)//pls dont ask why
                counter++;
            return;
        }
        checkPaths(root->left, counter, path);
        checkPaths(root->right, counter, path);
    }

    int pseudoPalindromicPaths (TreeNode* root){
        int counter = 0;
        checkPaths(root, counter);
        return counter;
    }
};
