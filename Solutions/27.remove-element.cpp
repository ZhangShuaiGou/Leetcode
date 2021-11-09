/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>& nums, int pos){
        for(int i=pos+1; i<nums.size();i++){
            if(nums[i]!=nums[pos]){
                return i;
            }
        }
        return -1;
    }

    int removeElement(vector<int>& nums, int val) {
        int pos = 0;
        for(;pos<nums.size();pos++){
            if(nums[pos]==val){
                int replace_val = helper(nums, pos);
                if(replace_val!=-1){
                    nums[pos] = nums[replace_val] + nums[pos];
                    nums[replace_val] = nums[pos] - nums[replace_val];
                    nums[pos] = nums[pos] - nums[replace_val];
                }
                else{
                    break;
                }
            }
        }

        return pos;
    }
};
// @lc code=end

