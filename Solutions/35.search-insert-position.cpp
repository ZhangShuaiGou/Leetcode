/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;

        int mid;
        while(start+1<end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid;
            }
            else{
                start = mid;
            }
        }

        if(nums[start]>=target){
            return start;
        }

        if(nums[end]>=target){
            return end;
        }

        return end+1;
    }
};
// @lc code=end

