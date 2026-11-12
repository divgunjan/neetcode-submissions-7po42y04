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
    bool Traversal(TreeNode* root, long minval, long maxval){   
        if(root==nullptr) return 1;
        int l = Traversal(root->left, minval, root->val);
        int r = Traversal(root->right, root->val, maxval);

        if(root->val<=minval || root->val >= maxval) return 0;
        return l&&r;
    }
    bool isValidBST(TreeNode* root) {
        return Traversal(root,LONG_MIN, LONG_MAX);
    }
};
