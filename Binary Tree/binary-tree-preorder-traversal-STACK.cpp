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
#include <bits/stdc++.h>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>res;
        
        stack<TreeNode*>S;

        if(root){
            S.push(root);
        }
        while(!S.empty()){
            TreeNode* temp = S.top();
            res.push_back(temp->val);
            S.pop();

            if(temp->right){
                S.push(temp->right);
                temp->right = NULL;
            }

            if(temp->left){
                S.push(temp->left);
                temp->left = NULL;
            }
            

        }

    return res;
        
    }
};
