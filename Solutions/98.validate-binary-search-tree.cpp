/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
   
    bool isValidBST(TreeNode* root) {
        if(root==nullptr){
            return true;
        }

        int max=root->val, min=root->val;

        return helper(root,max,min);
    }
    
    bool helper(TreeNode* root, int max, int min){
        if(root==nullptr){
            return true;
        }
        if(root->left!=nullptr)
    }
};
// @lc code=end

