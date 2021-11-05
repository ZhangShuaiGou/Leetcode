/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>& nums, int left){
        for(int i=left+1;i<nums.size();i++){
            if(nums[i]>nums[left]){
                return i;
            }
        }
        return -1;
    }

    int removeDuplicates(vector<int>& nums) {        
        if(nums.size()==0)
            return 0;

        if(nums.size()==1)
            return 1;

        int left = 0;
        for(;left<nums.size()-1;left++){
            if(nums[left]>=nums[left+1]){
                int target = helper(nums, left);
                if(target==-1){
                    break;
                }
                else{
                    nums[left+1] = nums[left+1] + nums[target];
                    nums[target] = nums[left+1] - nums[target];
                    nums[left+1] = nums[left+1] - nums[target];
                }
            }
        }

        return left+1;
    }
};
// @lc code=end

