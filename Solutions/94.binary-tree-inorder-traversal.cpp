/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        if(root==nullptr){
            return result;
        }

        vector<int>left = inorderTraversal(root->left);
        vector<int>right = inorderTraversal(root->right);

        for(auto i:left){
            result.push_back(i);
        }

        result.push_back(root->val);
        
        for(auto i:right){
            result.push_back(i);
        }        
        return result;

    }

};
// @lc code=end

