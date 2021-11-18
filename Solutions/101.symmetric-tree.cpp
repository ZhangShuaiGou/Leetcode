/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr){
            return true;
        }
        if(!(root->left && root->right)){
            return false;
        }
        if(root->left->val!=root->right->val){
            return false;
        }
        return helper(root->left,root->right);
    }

    bool helper(TreeNode* p, TreeNode* q){
        if(p==nullptr&&q==nullptr){
            return true;
        }
        else if(p==nullptr || q==nullptr){
            return false;
        }
        else{
            if(p->left && q->right && p->left->val!=q->right->val){
                return false;
            }
            if(p->right && q->left && p->right->val!=q->left->val){
                return false;
            }

            return helper(p->left,q->right)&&helper(p->right,q->left);
        }
    }
};
// @lc code=end

