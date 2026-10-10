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
    int diameterOfBinaryTree(TreeNode* root) {
      if(!root) return 0;

      int lh = maxDepth(root->left);
      int rh = maxDepth(root -> right); 
      int d = lh+rh;
      int sub = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)); 
      return max(d, sub);
    }
private:
    int maxDepth(TreeNode* root){
        if(root==nullptr) return 0;
        int left = maxDepth(root -> left);
        int right = maxDepth(root->right);

        return 1+max(left, right);
    }
};
