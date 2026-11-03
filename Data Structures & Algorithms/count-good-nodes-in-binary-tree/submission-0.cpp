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
    // void travRight(TreeNode* root){
    //     int right = trav(root->right);
    // }

    // void travLeft(TreeNode* left){
    //     int left = trav(root->left);
    // }
    int Traversal(TreeNode* root, int m){
        if(root == nullptr) return 0;
        int gd = 0;

        if(root->val >= m) gd++;
        m=max(m, root->val);

        int left = Traversal(root->left, m);
        int right = Traversal(root->right, m);

        return gd + left+right;
    }

    int goodNodes(TreeNode* root) {
        return Traversal(root, root->val);
    }
};
