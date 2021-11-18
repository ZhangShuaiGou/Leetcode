/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr){
            return result;
        }

        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* pos = que.front();
                que.pop();
                if(pos->left!=nullptr){
                    que.push(pos->left);
                }
                if(pos->right!=nullptr){
                    que.push(pos->right);
                }
                temp.push_back(pos->val);
            }
            result.push_back(temp);
        }

        return result;
    }
};
// @lc code=end

