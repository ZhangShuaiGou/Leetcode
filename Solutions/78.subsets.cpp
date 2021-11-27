/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> pos_nums;
        
        helper(result, nums, 0, pos_nums);
        return result;
    }
    void helper(vector<vector<int>>& result, vector<int>& nums, int pos, vector<int> pos_nums){
        result.push_back(pos_nums);
        for(int i=pos;i<nums.size();i++){
            pos_nums.push_back(nums[i]);
            helper(result, nums, i+1, pos_nums);
            pos_nums.pop_back();
        }
    }
};
// @lc code=end

