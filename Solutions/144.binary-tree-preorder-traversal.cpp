/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==nullptr){
            return result;
        }
        
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);

        result.push_back(root->val);
        for(auto i: left){
            result.push_back(i);
        }
        for(auto i: right){
            result.push_back(i);
        }

        return result;
    }
};
// @lc code=end

