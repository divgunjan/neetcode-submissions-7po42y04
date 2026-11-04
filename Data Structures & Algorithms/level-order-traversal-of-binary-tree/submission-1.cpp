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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};

        vector<vector<int>> final;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> ans;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                ans.push_back(node->val);

                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }   
            final.push_back(ans);
        }
    return final;
    }
};
