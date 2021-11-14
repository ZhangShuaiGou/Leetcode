/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start  = 0, end = nums.size()-1;
        while(start+1<end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]>nums[start]){
                if(nums[start]<target && target<nums[mid]){
                    end = mid;
                }
                else{
                    start = mid;
                }
            }
            else{
                if(nums[mid]<target && target<nums[end]){
                    start = mid;
                }
                else{
                    end = mid;
                }
            }
        }

        if(nums[start]==target){
            return true;
        }
        if(nums[end]==target){
            return true;
        }

        return false;
    }
};
// @lc code=end

