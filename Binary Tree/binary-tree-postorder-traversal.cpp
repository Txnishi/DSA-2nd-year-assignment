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

    void recurPO(TreeNode* root, vector<int>&A){
        if(root == NULL){
            return;
        }

        recurPO(root->left, A);
        recurPO(root->right, A);
        A.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>res;

        recurPO(root, res);

        return res;
    }
};
