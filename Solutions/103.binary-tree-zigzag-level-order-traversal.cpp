/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr){
            return result;
        }

        queue<TreeNode*> que;

        que.push(root);
        int flag = 0;
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
            if(flag%2==1){
                reverse(temp.begin(),temp.end());
            }
            result.push_back(temp);
            flag++;
        }

        return result;
    }
};
// @lc code=end

