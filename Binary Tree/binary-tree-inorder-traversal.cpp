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

    void recurIO(TreeNode* root, vector<int>&A){
        if(root == NULL){
            return;
        }

        recurIO(root->left, A);
        A.push_back(root->val);
        recurIO(root->right, A);
    }


    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>res;
        
        recurIO(root, res);

        return res;
        
    }
        
};
