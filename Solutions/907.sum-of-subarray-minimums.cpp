/*
 * @lc app=leetcode id=907 lang=cpp
 *
 * [907] Sum of Subarray Minimums
 */

// @lc code=start
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1e9+7;
        long int sum;
        vector<int> cur_arr;//store the current arrs
        vector<int> mins; //store all the mins from subsets
        helper(arr, 0, cur_arr, mins);
        sum = getSum(mins);

        return sum%mod;
    }
};
// @lc code=end

