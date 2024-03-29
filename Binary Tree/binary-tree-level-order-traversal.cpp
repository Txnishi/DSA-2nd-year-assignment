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
        
        vector<vector<int>>ans;

        if(root == NULL){
            return ans;
        }
        queue<TreeNode*>Q;  

        Q.push(root);

        while(!Q.empty()){

            int len = Q.size(); 
            vector<int>ele;
            while(len--){

                TreeNode* cur = Q.front();                
                ele.push_back(cur->val);

                if(cur->left != NULL) Q.push(cur->left);
                if(cur->right != NULL) Q.push(cur->right);
                Q.pop();
            }
            ans.push_back(ele);
        }

        return ans;
        
    }
        
};
